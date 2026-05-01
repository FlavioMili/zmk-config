/*                              34 KEY MATRIX / LAYOUT MAPPING

╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
│  0   1   2   3   4 │  5   6   7   8   9 │ │ LTP LTR LTM LTI LTC │ RTC RTI RTM RTR RTP │
│ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LMP LMR LMM LMI LMC │ RMC RMI RMM RMR RMP │
│ 20  21  22  23  24 │ 25  26  27  28  29 │ │ LBP LBR LBM LBI LBC │ RBC RBI RBM RBR RBP │
╰───────────╮ 30  31 │ 32  33 ╭───────────╯ ╰───────────╮ LHO LHI │ RHI RHO ╭───────────╯
            ╰────────┴────────╯                         ╰─────────┴─────────╯           
*/

#pragma once

#define LTC  4  // left-top row
#define LTI  3
#define LTM  2
#define LTR  1
#define LTP  0

#define RTC  5  // right-top row
#define RTI  6
#define RTM  7
#define RTR  8
#define RTP  9

#define LMC 14  // left-middle row
#define LMI 13
#define LMM 12
#define LMR 11
#define LMP 10

#define RMC 15  // right-middle row
#define RMI 16
#define RMM 17
#define RMR 18
#define RMP 19

#define LBC 24  // left-bottom row
#define LBI 23
#define LBM 22
#define LBR 21
#define LBP 20

#define RBC 25  // right-bottom row
#define RBI 26
#define RBM 27
#define RBR 28
#define RBP 29

#define LHI 31  // left thumb keys
#define LHO 30

#define RHI 32  // right thumb keys
#define RHO 33

#define KEYS_L LTC LTI LTM LTR LTP LMC LMI LMM LMR LMP LBC LBI LBM LBR LBP  // left-hand keys
#define KEYS_R RTC RTI RTM RTR RTP RMC RMI RMM RMR RMP RBC RBI RBM RBR RBP  // right-hand keys
#define THUMBS LHO LHI RHI RHO
