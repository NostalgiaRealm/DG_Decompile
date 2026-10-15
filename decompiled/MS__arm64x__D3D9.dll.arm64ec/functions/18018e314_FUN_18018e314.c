/*
 * FUN_18018e314 at 18018e314
 * undefined FUN_18018e314(void)
 * Address ranges: 18018e314-18018e3e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018e314(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_1[4] == 1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(param_2,param_1,0x254);
  }
  FUN_18018de28();
  iVar4 = 0;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[4] = 1;
  uVar3 = 0;
  if (param_1[2] != 0) {
    do {
      *(undefined1 *)((longlong)param_2 + uVar3 + 0x214) =
           *(undefined1 *)((longlong)param_1 + uVar3 + 0x214);
      uVar5 = (ulonglong)*(byte *)((longlong)param_1 + uVar3 + 0x214);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      *(undefined1 *)(param_2 + uVar5 * 2 + 5) = 0;
      *(undefined1 *)((longlong)param_2 + uVar5 * 8 + 0x15) =
           *(undefined1 *)((longlong)param_1 + uVar5 * 8 + 0x15);
      uVar2 = *(undefined1 *)((longlong)param_1 + uVar5 * 8 + 0x16);
      *(char *)((longlong)param_2 + uVar5 * 8 + 0x17) = (char)iVar4;
      *(undefined1 *)((longlong)param_2 + uVar5 * 8 + 0x16) = uVar2;
      *(undefined1 *)(param_2 + uVar5 * 2 + 6) = *(undefined1 *)(param_1 + uVar5 * 2 + 6);
      *(undefined1 *)((longlong)param_2 + uVar5 * 8 + 0x19) =
           *(undefined1 *)((longlong)param_1 + uVar5 * 8 + 0x19);
      iVar4 = iVar4 + (uint)(*(byte *)((longlong)param_1 + uVar5 * 8 + 0x16) >> 2);
    } while (uVar1 < (uint)param_1[2]);
  }
  param_2[3] = iVar4 << 2;
  return;
}

