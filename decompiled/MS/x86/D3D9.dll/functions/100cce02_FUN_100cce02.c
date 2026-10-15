/*
 * FUN_100cce02 at 100cce02
 * undefined __thiscall FUN_100cce02(void * this, HWND param_1)
 * Address ranges: 100cce02-100ccee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100cce02(void *this,HWND param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  SIZE_T SVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_8;
  
  uVar7 = 0;
  uVar8 = *(uint *)((int)this + 0xe0);
  if (uVar8 != 0) {
    do {
      if (*(HWND *)(*(int *)((int)this + 0xdc) + uVar7 * 0x10) == param_1) {
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if (uVar7 == uVar8) {
    BVar3 = IsWindowUnicode(param_1);
    iVar1 = *(int *)((int)this + 0xf0);
    local_8 = CONCAT31(local_8._1_3_,BVar3 != 0);
    *(int *)((int)this + 0xf0) = iVar1 + 1;
    uVar4 = FUN_100cceea(param_1);
    iVar2 = *(int *)((int)this + 0xe4);
    if (*(int *)((int)this + 0xe0) == iVar2) {
      uVar8 = 0x10;
      if (iVar2 != 0) {
        uVar8 = iVar2 * 2;
      }
      SVar5 = (SIZE_T)((ulonglong)uVar8 * 0x10);
      if ((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) {
        SVar5 = 0xffffffff;
      }
      puVar6 = (undefined4 *)FUN_100cfd89(SVar5);
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      FUN_100cff00(puVar6,*(undefined4 **)((int)this + 0xdc),*(int *)((int)this + 0xe4) << 4);
      thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xdc));
      *(undefined4 **)((int)this + 0xdc) = puVar6;
      *(uint *)((int)this + 0xe4) = uVar8;
    }
    puVar6 = (undefined4 *)(*(int *)((int)this + 0xe0) * 0x10 + *(int *)((int)this + 0xdc));
    *puVar6 = param_1;
    puVar6[1] = uVar4;
    puVar6[2] = iVar1;
    puVar6[3] = local_8;
    *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) + 1;
  }
  return;
}

