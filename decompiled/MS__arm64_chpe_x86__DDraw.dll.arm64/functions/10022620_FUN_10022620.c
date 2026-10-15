/*
 * FUN_10022620 at 10022620
 * undefined FUN_10022620(void)
 * Address ranges: 10022620-10022717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10022620(int param_1)

{
  int *piVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x1c) - 0x19U < 2) {
    piVar1 = (int *)(param_1 + 0x98);
    if (*piVar1 != 0) goto LAB_100226fc;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    FUN_1001fc90(param_1 + 0x84,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  else {
    piVar1 = (int *)(param_1 + 0x90);
    if (*piVar1 != 0) goto LAB_100226fc;
    FUN_10034140(param_1,&local_30);
    FUN_10020818(param_1 + 0x84,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_30,
                 uStack_2c,0);
  }
  FUN_100224c0(param_1);
LAB_100226fc:
  return *piVar1 != 0;
}

