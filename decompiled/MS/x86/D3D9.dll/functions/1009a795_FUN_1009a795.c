/*
 * FUN_1009a795 at 1009a795
 * undefined4 __stdcall FUN_1009a795(int param_1, undefined4 * param_2)
 * Address ranges: 1009a795-1009a807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a795(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0x50);
    puVar5 = param_2;
    for (iVar3 = 0x4c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_10090598(*(void **)(param_1 + 0x44),*(int *)(param_1 + -0x58f0),(int)param_2);
    *param_2 = *(undefined4 *)(param_1 + -0x58ec);
    param_2[0x32] = *(undefined4 *)(param_1 + -0x58e0);
    cVar1 = FUN_1000287f(*(int *)(param_1 + -0x58c4));
    if (cVar1 == '\0') {
      param_2[7] = param_2[7] & 0xfeffffff;
      param_2[0x35] = param_2[0x35] & 0xfffffff7;
      param_2[0x36] = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

