/*
 * FUN_18019dba0 at 18019dba0
 * undefined FUN_18019dba0(void)
 * Address ranges: 18019dba0-18019dd03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019dba0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1d8) == 0)) {
    FUN_18019c270(param_1);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar5 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    uVar8 = (ulonglong)uVar5;
    lVar1 = param_1 + ((ulonglong)(uVar5 >> 6) + 0x4c) * 8;
    uVar7 = (ulonglong)(uVar5 >> 3) & 7;
    *(byte *)(lVar1 + uVar7) = *(byte *)(lVar1 + uVar7) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
    iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x90) + uVar8 * 0x28 + 0x18);
    if (iVar6 == 0) {
      FUN_18019cd10(param_1,param_2,param_3);
      lVar1 = *(longlong *)(param_1 + 0x1f0) + uVar8 * 0x28;
      thunk_FUN_180223c70(lVar1 + 0x18,lVar1 + 0x18,
                          *(longlong *)(param_1 + 0x90) + uVar8 * 0x28 + 0x18);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x90) + uVar8 * 0x28 + 0x18);
    }
    else if ((*(longlong *)(param_1 + 0xd0) != 0) &&
            (iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0xd0) + uVar8 * 0x28 + 0x18),
            iVar6 == 0)) {
      lVar1 = *(longlong *)(param_1 + 0xd0) + uVar8 * 0x28;
      iVar6 = *(int *)(lVar1 + 0x18);
      iVar3 = *(int *)(lVar1 + 0x1c);
      iVar2 = *(int *)(lVar1 + 0x20);
      iVar4 = *(int *)(lVar1 + 0x24);
      FUN_180199710(param_1,*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0xb8),param_2
                    ,param_3,lVar1 + 0x18);
      FUN_18019ca90((float)iVar6,(float)iVar3,(float)iVar2,(float)iVar4,param_1,param_2,param_3,0);
    }
  }
  return;
}

