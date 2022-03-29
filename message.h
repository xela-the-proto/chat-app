#ifndef HEADER_message
#define HEADER_message
#include <cstring>
#include "date.h"
#include "time.h"

class Message{
	private:
	Date date;
	Time time;
	bool received; //vero se il messaggio è stato ricevuyo falso se è stato inviato
	char message[1024];
	static int counter; //attributo statico che rappresenta un identificativo di un messaggio
	
	public:
	Message(void){
		strycpy(message,"");
		received = false;
		counter ++;//incremento per ogni oggetto
	}

	Date getDate(void){
		return date;
	}

	Time getTime(void){
		return time;
	}

	bool isReceived(void){
		return received;
	}

	int getText(char t[]){
		strcpy(t,message);
		return strlen(t);
	}

	void setDate(Date date){
		this -> date = date;
	}

	void setTime(Time time){
		this -> time = time;
	}

	void setReceived(bool received){
		this -> received = received;
	}

	void setText(char t[]){
		strcpy(message,t);
	}

	//metodo statico per accedere a qualcosa di statico
	static int getCounter(void){
		return counter;
	}
};

int Message::counter = 0;//inizializziamo attributo statico

#endif HEADER_message