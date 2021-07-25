import tkinter as tk

window = tk.Tk()
window.geometry("420x360")
window.title("Hacking Mode")
window.configure(bg="grey12")

attack_btn = tk.Button(bg="yellow")
attack_btn.pack()

reccon_btn = tk.Button(bg="blue")
reccon_btn.pack()

exit_btn = tk.Button(bg="red")
exit_btn.pack()

window.mainloop()
