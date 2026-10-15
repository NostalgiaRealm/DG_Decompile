/*
 * FUN_1801aea68 at 1801aea68
 * undefined FUN_1801aea68(void)
 * Address ranges: 1801aea68-1801aeba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801aea68(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
    FUN_1801ad4b8(param_1);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    uVar2 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    uVar5 = (ulonglong)uVar2;
    lVar1 = param_1 + ((ulonglong)(uVar2 >> 6) + 0x4c) * 8;
    uVar4 = (ulonglong)(uVar2 >> 3) & 7;
    *(byte *)(lVar1 + uVar4) = *(byte *)(lVar1 + uVar4) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
    iVar3 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x84) + uVar5 * 0x20 + 0x10);
    if (iVar3 == 0) {
      FUN_1801adde0(param_1,param_2,param_3);
      lVar1 = *(longlong *)(param_1 + 0x218) + uVar5 * 0x20;
      thunk_FUN_180223c70(lVar1 + 0x10,lVar1 + 0x10,
                          *(longlong *)(param_1 + 0x84) + uVar5 * 0x20 + 0x10);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x84) + uVar5 * 0x20 + 0x10);
    }
    else {
      iVar3 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x1c8) + uVar5 * 0x20 + 0x10);
      if ((iVar3 == 0) &&
         ((*(byte *)(lVar1 + ((ulonglong)(uVar2 >> 3) & 7)) >> (uVar5 & 7) & 1) != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x1c8) + uVar5 * 0x20;
        FUN_1801adad8((float)*(int *)(lVar1 + 0x10),(float)*(int *)(lVar1 + 0x14),
                      (float)*(int *)(lVar1 + 0x18),(float)*(int *)(lVar1 + 0x1c),param_1,param_2,
                      param_3,0);
      }
    }
  }
  return;
}

