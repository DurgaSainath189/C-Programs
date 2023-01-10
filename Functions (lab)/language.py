from googletrans import Translator
from gtts import gTTS
from tkinter import *

window=Tk()
window.geometry('600x280')
window.config(bg='blue')

e1 = Entry(window, bg='pink',fg='black',font=('Arial',25,'bold'))
e1.place(x=20,y=20)

def convert_lang():
    a1=e1.get()
    t1=Translator()
    t=click_option.get()
    
    if(t=='English'):
        convert="en"
    elif(t=='Hindi'):
        convert='hi'
    elif(t=='Telugu'):
        convert='te'
    elif(t=='German'):
        convert='de'
    
    trans_text=t1.translate(a1,dest=convert)
    trans_text=trans_text.text
    ob1=gTTS(text=trans_text, slow=False,lang=convert)
    label_2.config(text=trans_text)
    
choices=[
    "English",
    "Hindi",
    "Telugu",
    "German"
]
click_option=StringVar()
click_option.set("Select Language")
list_drop=OptionMenu(window,click_option,*choices)
list_drop.configure(background="green",foreground="white",font=('arial',15,'bold'))
list_drop.place(x=400,y=20)

label_2=Label(window, text="\t\t\t\t\t",bg="black",fg="white",font=('arial',40,'bold'))        
label_2.place(x=0,y=120)
label_2=Label(window, text="Translated text",bg="black",fg="white",font=('arial',40,'bold'))
label_2.place(x=180,y=120)
Button_1=Button(window,text="Translate",bg="red",fg="white",font=('arial',25,'bold'),command=convert_lang)
Button_1.place(x=220,y=200)   


window.mainloop()