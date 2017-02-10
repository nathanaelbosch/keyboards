import os
import re
import collections
from pprint import pprint

pycode = ""

directories = ["../../bitpython",
               "../../../Documents/Uni/Machine Learning"]
extensions = [".py", ".tex", ".R"]

for directory in directories:
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(tuple(extensions)):
                print(os.path.join(root, file))
                with open(os.path.join(root, file)) as f:
                    pycode += "".join(f.readlines())

pycode = re.sub('[\s+]', '', pycode)
pycode = re.sub('[a-zA-Z0-9]', '', pycode)

counter = collections.Counter(pycode)

pprint(counter.most_common())
