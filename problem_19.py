# You are given the following information, but you may prefer to do some research for yourself.

# 1 Jan 1900 was a Monday.
# Thirty days has September,
# April, June and November.
# All the rest have thirty-one,
# Saving February alone,
# Which has twenty-eight, rain or shine.
# And on leap years, twenty-nine.

# A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
# How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

from re import L


month_order = ["jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"]
week_order = ["mon", "tue", "wed", "thu", "fri", "sat", "sun"]

days_in_month = {
    "jan" : 31,
    "feb" : 28,
    "mar" : 31,
    "apr" : 30,
    "may" : 31,
    "jun" : 30,
    "jul" : 31,
    "aug" : 31,
    "sep" : 30,
    "oct" : 31,
    "nov" : 30,
    "dec" : 31
}

start_year = 1901 # not a leap year
end_year = 2000 # leap year


month_idx = 0
week_idx = 0

result = 0

for year in range(start_year, end_year + 1):
    week_offset = 1
    for month in month_order:
        day = 0
        week_idx = week_offset
        while True:
            if week_order[week_idx] == 'sun' and day == 0:
                result += 1
            week_idx += 1
            if week_idx == 7:
                week_idx = 0
            day += 1

            if month == 'feb':
                # leap year stuff
                if year % 4 == 0 and year != 1900:
                    # case of leap year
                    # feb == 29 days
                    if day == 29:
                        week_offset = week_idx
                        day = 0
                        break
                else:
                    # feb == 28 days
                    if day == days_in_month[month]:
                        # we're at the end of the month
                        week_offset = week_idx
                        day = 0
                        break
            elif day == days_in_month[month]:
                # we're at the end of the month
                week_offset = week_idx
                day = 0
                break

print(result)
                



