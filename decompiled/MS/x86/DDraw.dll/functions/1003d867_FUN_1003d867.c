/*
 * FUN_1003d867 at 1003d867
 * undefined1 __thiscall FUN_1003d867(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 1003d867-1003d987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1003d867(void *this,undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SIZE_T SVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint local_c;
  undefined1 local_5;
  
  iVar4 = FUN_1003d988(this,(undefined4 *)(*(int *)((int)this + 0x34) + 0x1000),param_2);
  if (iVar4 == -1) {
    return 0;
  }
  iVar9 = *(int *)((int)this + 0x54) * 0x1c;
  iVar2 = *(int *)(*(int *)((int)this + 0x5c) + 4 + *(int *)((int)this + 0x50) * 0x10);
  local_c = 0;
  iVar5 = *(int *)(iVar2 + 0x14 + iVar9);
  bVar10 = iVar5 == 0;
  if (iVar5 != 0) {
    do {
      iVar5 = FUN_10061253((byte *)(*(int *)(*(int *)(iVar2 + 0x10 + iVar9) + local_c * 8) +
                                   *(int *)((int)this + 0x44)),
                           (byte *)(iVar4 + *(int *)((int)this + 0x44)));
      if (iVar5 == 0) {
        *(uint *)((int)this + 0x4c) = (*(int *)((int)this + 0x4c) - param_2) + -1;
        break;
      }
      local_c = local_c + 1;
    } while (local_c < *(uint *)(iVar2 + 0x14 + iVar9));
    bVar10 = local_c == *(uint *)(iVar2 + 0x14 + iVar9);
  }
  local_5 = 1;
  if (bVar10) {
    iVar5 = *(int *)(iVar2 + 0x18 + iVar9);
    if (*(int *)(iVar2 + 0x14 + iVar9) == iVar5) {
      if (iVar5 == 0) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = iVar5 * 2;
      }
      SVar7 = (SIZE_T)((ulonglong)uVar6 * 8);
      if ((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) {
        SVar7 = 0xffffffff;
      }
      puVar8 = (undefined4 *)FUN_10060bfe(SVar7);
      if (puVar8 == (undefined4 *)0x0) {
        local_5 = 0;
        goto LAB_1003d975;
      }
      FUN_10060d80(puVar8,*(undefined4 **)(iVar2 + 0x10 + iVar9),*(int *)(iVar2 + 0x18 + iVar9) << 3
                  );
      thunk_FUN_10060be1(*(LPVOID *)(iVar2 + 0x10 + iVar9));
      *(undefined4 **)(iVar2 + 0x10 + iVar9) = puVar8;
      *(uint *)(iVar2 + 0x18 + iVar9) = uVar6;
    }
    iVar5 = *(int *)(iVar2 + 0x14 + iVar9);
    iVar3 = *(int *)(iVar2 + 0x10 + iVar9);
    local_5 = 1;
    *(int *)(iVar3 + iVar5 * 8) = iVar4;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0xffffffff;
    piVar1 = (int *)(iVar2 + 0x14 + iVar9);
    *piVar1 = *piVar1 + 1;
  }
LAB_1003d975:
  *(uint *)((int)this + 0x58) = local_c;
  return local_5;
}

