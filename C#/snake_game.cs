using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Threading;

namespace Snake
{
    public enum Direction { Stop, Up, Down, Left, Right }

    internal class Program
    {
        private static Size _size;
        private static Point _head;
        private static Point _fruit;
        private static bool _gameOver;
        private static List<Point> _tail;
        private static Direction _direction;
        private static readonly Random _random = new Random();

        private static void Main(string[] args)
        {
            Start();
        }

        private static void Start()
        {
            Setup();
            while (_gameOver == false)
            {
                Draw();
                Input();
                Logic();
                Thread.Sleep(100);
            }
            End();
        }

        private static void Setup()
        {
            _gameOver = false;
            _size = new Size(40, 20);
            _tail = new List<Point>();
            _direction = Direction.Stop;
            _head = RandomPoint();
            _fruit = RandomPoint();

            Console.Clear();
            Console.CursorVisible = false;
            Console.Title = "Snake Game";

            for (var i = 0; i < _size.Height; i++)
            {
                if (i == 0 || i == _size.Height - 1)
                {
                    $"+{new string('-', _size.Width - 2)}+".Write(0, i);
                }
                else
                {
                    $"|{new string(' ', _size.Width - 2)}|".Write(0, i);
                }
            }
        }

        private static void Draw()
        {
            for (var i = 1; i < _size.Height - 1; i++)
            {
                new string('x', _size.Width - 2).Write(1, i, ConsoleColor.Blue, ConsoleColor.Black);
            }

            _head.Write("0", ConsoleColor.Yellow, ConsoleColor.Black);
            _tail.Write("o");
            _fruit.Write("*", ConsoleColor.Cyan, ConsoleColor.Black);

            $"Score: {_tail.Count()}".Write(_size.Width + 3, 5);
        }

        private static void Input()
        {
            if (!Console.KeyAvailable) { return; }

            var key = Console.ReadKey(false).Key;

            if (key == ConsoleKey.UpArrow) { _direction = Direction.Up; }
            else if (key == ConsoleKey.DownArrow) { _direction = Direction.Down; }
            else if (key == ConsoleKey.LeftArrow) { _direction = Direction.Left; }
            else if (key == ConsoleKey.RightArrow) { _direction = Direction.Right; }
            else if (key == ConsoleKey.Escape) { _direction = Direction.Stop; }
        }

        private static void Logic()
        {
            if (_direction == Direction.Stop) { return; }

            if (_tail.Contains(_head))
            {
                _gameOver = true;
                _direction = Direction.Stop;
                return;
            }

            _tail.Add(_head.Copy());

            if (_head == _fruit) { _fruit = RandomPoint(); }
            else { _tail.RemoveFirst(); }

            if (_direction == Direction.Up)
            {
                if (_head.Y - 1 < 1) { _head.Y = _size.Height - 2; }
                else { _head.Y--; }
            }
            else if (_direction == Direction.Down)
            {
                if (_head.Y + 1 > _size.Height - 2) { _head.Y = 1; }
                else { _head.Y++; }
            }
            else if (_direction == Direction.Left)
            {
                if (_head.X - 1 < 1) { _head.X = _size.Width - 2; }
                else { _head.X--; }
            }
            else if (_direction == Direction.Right)
            {
                if (_head.X + 1 > _size.Width - 2) { _head.X = 1; }
                else { _head.X++; }
            }
        }

        private static void End()
        {
            $"GAME OVER".Write(_size.Width + 3, 3, ConsoleColor.Red, ConsoleColor.White);
            $"Spacebar to play again".Write(_size.Width + 3, 4, ConsoleColor.Black, ConsoleColor.Gray);

            if (Console.ReadKey(true).Key == ConsoleKey.Spacebar) { Start(); }
        }

        public static Point RandomPoint()
        {
            var x = _random.Next(1, _size.Width - 1);
            var y = _random.Next(1, _size.Height - 1);
            var point = new Point(x, y);

            if (_tail.Contains(point) || _head == point) { return RandomPoint(); }
            else { return point; }
        }
    }
    
    public static class Extensions
    {
        public static void RemoveFirst<T>(this List<T> list)
        {
            if (list.Any())
            {
                list.Remove(list.First());
            }
        }

        public static void RemoveLast<T>(this List<T> list)
        {
            if (list.Any())
            {
                list.Remove(list.Last());
            }
        }

        public static Point Copy(this Point point)
        {
            return new Point(point.X, point.Y);
        }

        public static void Write(this IEnumerable<Point> points, string text)
        {
            foreach (var point in points)
            {
                Write(text, point.X, point.Y);
            }
        }

        public static void Write(this IEnumerable<Point> points, string text, ConsoleColor foreground, ConsoleColor background)
        {
            foreach (var point in points)
            {
                Write(text, point.X, point.Y, foreground, background);
            }
        }

        public static void Write(this Point point, string text)
        {
            Write(text, point.X, point.Y);
        }

        public static void Write(this Point point, string text, ConsoleColor foreground, ConsoleColor background)
        {
            Write(text, point.X, point.Y, foreground, background);
        }

        public static void Write(this string text, int x, int y)
        {
            Console.SetCursorPosition(x, y);
            Console.Write(text);
        }

        public static void Write(this string text, int x, int y, ConsoleColor foreground, ConsoleColor background)
        {
            Console.SetCursorPosition(x, y);
            Console.ForegroundColor = foreground;
            Console.BackgroundColor = background;
            Console.Write(text);
            Console.ResetColor();
        }
    }
}