import tkinter as tk
import pyjokes
a=pyjokes.get_joke()





root=tk.Tk()
root.title('JOKES GAMES')
root.geometry('300x300')
root.configure(bg='purple')




def joke():
	global joke
	joke=pyjokes.get_joke()
	T.insert(tk.END,joke)


def clear():
      T.delete(1.0,'end')


T=tk.Text(root,bg='white')
T.place(x=5,y=5,height=120,width=290,)
b1=tk.Button(root,text='JOKE',bg='white',fg='red',command=joke)
b1.place(x=30,y=150,height=50,width=100)
b2=tk.Button(root,text='CLEAR',bg='red',fg='white',command=clear)
b2.place(x=140,y=150,height=50,width=100)



root.mainloop()
