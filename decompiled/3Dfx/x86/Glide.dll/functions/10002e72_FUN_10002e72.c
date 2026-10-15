/*
 * FUN_10002e72 at 10002e72
 * undefined __fastcall FUN_10002e72(undefined4 * param_1)
 * Address ranges: 10002e72-10002ea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10002e72(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_10002fd2(param_1,'\0');
      FUN_10002bad((int)param_1);
      FUN_10002daa(param_1);
      FUN_1004f9b6(param_1);
    }
  }
  return;
}

