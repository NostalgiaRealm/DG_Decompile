/*
 * FUN_18012feb0 at 18012feb0
 * undefined FUN_18012feb0(void)
 * Address ranges: 18012feb0-18012ff6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012feb0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [36];
  uint local_34;
  
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      ((((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0 || (*(longlong *)(param_1 + 0x30) != 0)) &&
       ((*(uint *)(param_1 + 0x48) >> 3 & 1) == 0)))) &&
     (lVar1 = thunk_FUN_180223810(*(longlong *)(param_1 + 0x28),auStack_58,0x30), lVar1 != 0)) {
    if (param_2 == 0 && param_3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      iVar2 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
    }
    else {
      iVar2 = (param_3 - param_2) * 0x1000;
      lVar1 = *(longlong *)(param_1 + 0x28) + (ulonglong)(uint)(param_2 << 0xc);
    }
    thunk_FUN_1802237d4(lVar1,iVar2,local_34 | 0x100,auStack_60);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar3 = *(uint *)(param_1 + 0x48) | 2;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x48) & 0xfffffffd;
    }
    *(uint *)(param_1 + 0x48) = uVar3;
  }
  return;
}

