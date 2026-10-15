/*
 * FUN_1005e343 at 1005e343
 * undefined __stdcall FUN_1005e343(HWND param_1)
 * Address ranges: 1005e343-1005e42e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e343(HWND param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 uVar5;
  SIZE_T SVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_c;
  
  iVar3 = DAT_1006c210;
  uVar8 = 0;
  uVar9 = *(uint *)(DAT_1006c210 + 0xe0);
  if (uVar9 != 0) {
    do {
      if (*(HWND *)(*(int *)(DAT_1006c210 + 0xdc) + uVar8 * 0x10) == param_1) {
        return;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  if (uVar8 == uVar9) {
    BVar4 = IsWindowUnicode(param_1);
    iVar1 = *(int *)(iVar3 + 0xf0);
    local_c = CONCAT31(local_c._1_3_,BVar4 != 0);
    *(int *)(iVar3 + 0xf0) = iVar1 + 1;
    uVar5 = FUN_1005e42f(param_1);
    iVar2 = *(int *)(iVar3 + 0xe4);
    if (*(int *)(iVar3 + 0xe0) == iVar2) {
      uVar9 = 0x10;
      if (iVar2 != 0) {
        uVar9 = iVar2 * 2;
      }
      SVar6 = (SIZE_T)((ulonglong)uVar9 * 0x10);
      if ((int)((ulonglong)uVar9 * 0x10 >> 0x20) != 0) {
        SVar6 = 0xffffffff;
      }
      puVar7 = (undefined4 *)FUN_10060bfe(SVar6);
      if (puVar7 == (undefined4 *)0x0) {
        return;
      }
      FUN_10060d80(puVar7,*(undefined4 **)(iVar3 + 0xdc),*(int *)(iVar3 + 0xe4) << 4);
      thunk_FUN_10060be1(*(LPVOID *)(iVar3 + 0xdc));
      *(undefined4 **)(iVar3 + 0xdc) = puVar7;
      *(uint *)(iVar3 + 0xe4) = uVar9;
    }
    puVar7 = (undefined4 *)(*(int *)(iVar3 + 0xe0) * 0x10 + *(int *)(iVar3 + 0xdc));
    *puVar7 = param_1;
    puVar7[1] = uVar5;
    puVar7[2] = iVar1;
    puVar7[3] = local_c;
    *(int *)(iVar3 + 0xe0) = *(int *)(iVar3 + 0xe0) + 1;
  }
  return;
}

