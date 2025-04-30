# Funnily enough, test_all is not very well tested.
# Try running tests individually when viewing with gtkwave,
# viewing the custom logfiles, or when debugging in general

# sanity check (this test is fast, keeps you from debugging stuff in the current test when its actually something else)
from test.test_negatives import *

# Current Tests (the one you care about and want to see)


# All Tests (to make sure nothing else broke in the meantime)
from test.test_negatives import *
from test.test_matadd import *
from test.test_matmul import *
from test.test_load import *
from test.test_load_8_threads import *
