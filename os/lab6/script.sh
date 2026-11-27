printf "Выберите желаемый формат даты и времени:
1) ДД/ММ/ГГГГ;
2) ДД ММ, полное название дня недели;
3) ГГ со словом “год” номер дня недели со словом “день” номер
недели в году со словом “неделя”;
4) часовой пояс по Гринвичу чч:мм;
5) количество дней, прошедших с начала года со словом “дней”,
полное название месяца\n"

for i in 1 2 3 4 5 ;
  do
read value
if [ "$value" -eq 1  ] ; then
echo $(date +"%d/%m/%Y")
printf "\n"
if [ "$value" -eq 2 ] ; then
echo "$(date +"%d %m") $(date +%A)"
if [ "$value" -eq 3 ] ; then
echo "$(date +%Y) год $(date +%u) день (date +%V) неделя"
if [ "$value" -eq 4 ] ; then
echo $(date -u +%T)
if [ "$value" -eq 5 ] ; then
echo "$(date +%j) дней $(date +%B)"
fi
  done
