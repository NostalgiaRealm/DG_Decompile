/*
 * FUN_180055e44 at 180055e44
 * longlong * __fastcall FUN_180055e44(longlong param_1, ulonglong param_2, ulonglong param_3, undefined8 * param_4)
 * Address ranges: 180055e44-180055f1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180055e44(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  cVar5 = '\x01';
  local_40 = 1;
  local_48 = 0x100;
  plVar4 = (longlong *)0x0;
  local_58 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
  iVar1 = *(int *)((ulonglong)*(uint *)(param_1 + 0x38) * 0x1ac0 + 0x904 +
                  *(longlong *)(param_1 + 0x30));
  if ((iVar1 == 0x10de) || (iVar1 == 0x8086)) {
    cVar5 = '\0';
  }
  local_50 = local_58;
  uVar3 = FUN_18006c3f8(param_1 + 0x3c,*(uint **)(param_1 + 0x58),*(byte **)(param_1 + -8),param_2,
                        param_3,0x51,(longlong *)&local_58,param_4,in_stack_ffffffffffffff88,cVar5,
                        *(undefined1 *)(param_1 + 0x48));
  puVar2 = local_58;
  if ((char)uVar3 != '\0') {
    plVar4 = FUN_1800f08f4((longlong)local_50 - (longlong)local_58,local_58);
  }
  FUN_1800fbcf0(puVar2);
  return plVar4;
}

