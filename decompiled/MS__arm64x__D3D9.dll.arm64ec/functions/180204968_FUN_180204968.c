/*
 * FUN_180204968 at 180204968
 * undefined FUN_180204968(void)
 * Address ranges: 180204968-1802049ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180204968(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    iVar1 = *(int *)(param_2 + 0x1c + lVar2 * 0x24);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      thunk_FUN_1802236f8(lVar3 + 0x28);
      FUN_18020c678(lVar3,iVar1,1);
      thunk_FUN_18022370c(lVar3 + 0x28);
      FUN_180205e48(*(undefined8 *)(param_1 + 0x18),param_2 + 0x1c + lVar2 * 0x24);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_1802229d8(param_2,0x2d0);
  return;
}

