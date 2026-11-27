printf "Выберите кол-во повторений (от 1 до 5)\n"
read repeat

if repeat -gt 5 ; then
printf "Вы ввели больше 5"
exit
fi

printf "Выберите желаемый формат даты и времени:
1) ДД/ММ/ГГГГ;
2) ДД ММ, полное название дня недели;
3) ГГ со словом “год” номер дня недели со словом “день” номер
недели в году со словом “неделя”;
4) часовой пояс по Гринвичу чч:мм;
5) количество дней, прошедших с начала года со словом “дней”,
полное название месяца\n"



for i in {%repeat} ;
  do
read value
if [ "$value" -eq 1  ] ; then
echo $(date +"%d/%m/%Y")
elif [ "$value" -eq 2 ] ; then
echo "$(date +"%d %m") $(date +%A)"
elif [ "$value" -eq 3 ] ; then
echo "$(date +%Y) год $(date +%u) день $(date +%V) неделя"
elif [ "$value" -eq 4 ] ; then
echo $(date -u +"%H:%M")
elif [ "$value" -eq 5 ] ; then
echo "$(date +%j) дней $(date +%B)"
fi
  done
