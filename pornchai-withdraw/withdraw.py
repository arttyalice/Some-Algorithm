BANK_NOTE = [100, 20, 10, 5, 1]

def is_integer(input_raw):
    return unicode(input_raw).isnumeric()


def withdraw_money():
    withdraw = 0
    input_raw = raw_input('Enter the amount to withdraw: ')
    if is_integer(input_raw) == True:
        withdraw = int(input_raw)
    else:
        print '\033[91mMust insert number\033[0m'
        return

    result = {}
    result['total'] = 0
    for b in BANK_NOTE:
        result[b] = 0
        while withdraw >= b:
            result[b] += 1
            result['total'] += 1
            withdraw -= b
        print result[b], 'of ', b, ' bank note'
    print '\033[92mTotal bank note use: ', result['total'], '\033[0m'

while True:
    withdraw_money()