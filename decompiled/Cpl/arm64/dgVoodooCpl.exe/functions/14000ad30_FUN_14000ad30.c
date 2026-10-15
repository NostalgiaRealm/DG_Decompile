/*
 * FUN_14000ad30 at 14000ad30
 * undefined __cdecl FUN_14000ad30(longlong param_1, undefined8 * param_2, longlong param_3, char param_4)
 * Address ranges: 14000ad30-14000af5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ad30(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  HWND hWnd;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  SIZE_T SVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 auStack_260 [66];
  
  uVar6 = FUN_14000ac78(param_1,(undefined2 *)param_2,(undefined2 *)(param_1 + 0x288));
  bVar4 = false;
  if (*(int *)(param_1 + 0x1b40) != 0) {
    uVar7 = FUN_14000fd78(param_1,0x402,0);
    bVar4 = *(int *)(*(longlong *)(param_1 + 0x1b38) + (uVar7 & 0xffffffff) * 0x218) == 1;
  }
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = (uint)uVar6 & 0xff;
  }
  thunk_FUN_140001000(auStack_260,param_2,0x104);
  iVar5 = *(int *)(param_1 + 0x1b44);
  if (*(int *)(param_1 + 0x1b40) == iVar5) {
    uVar2 = iVar5 << 1;
    if (iVar5 == 0) {
      uVar2 = 0x10;
    }
    uVar7 = CONCAT44(0,uVar2);
    SVar10 = uVar7 * 0x218;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    if (SUB168(auVar3 * ZEXT816(0x218),8) != 0) {
      SVar10 = 0xffffffffffffffff;
    }
    puVar8 = (undefined8 *)thunk_FUN_1400247f0(SVar10);
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    puVar12 = puVar8;
    if (uVar2 != 0) {
      do {
        *(undefined4 *)puVar12 = 0;
        puVar12[1] = 0;
        uVar7 = uVar7 - 1;
        FUN_140025250((undefined1 *)(puVar12 + 2),0,0x208);
        puVar12 = puVar12 + 0x43;
      } while (uVar7 != 0);
    }
    thunk_FUN_140001000(puVar8,*(undefined8 **)(param_1 + 0x1b38),
                        (ulonglong)*(uint *)(param_1 + 0x1b44) * 0x218);
    thunk_FUN_140024830(*(LPVOID *)(param_1 + 0x1b38));
    *(undefined8 **)(param_1 + 0x1b38) = puVar8;
    *(uint *)(param_1 + 0x1b44) = uVar2;
  }
  uVar9 = 0x104;
  puVar11 = (uint *)(*(longlong *)(param_1 + 0x1b38) +
                    (ulonglong)*(uint *)(param_1 + 0x1b40) * 0x218);
  *(uint *)(param_1 + 0x1b40) = *(uint *)(param_1 + 0x1b40) + 1;
  *puVar11 = uVar1;
  *(longlong *)(puVar11 + 2) = param_3;
  thunk_FUN_140001000((undefined8 *)(puVar11 + 4),auStack_260,0x104);
  uVar7 = (ulonglong)(*(int *)(param_1 + 0x1b40) - 1);
  if ((uVar6 & 0xff) == 0) {
    iVar5 = FUN_14000ff10(param_1,0x402,(LPARAM)auStack_260,uVar7);
    if ((iVar5 == 0) && (bVar4)) {
      uVar6 = FUN_14000fd78(param_1,0x402,1);
      hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
      uVar9 = 1;
      SendMessageA(hWnd,0x144,1,0);
      FUN_14000fdc0(param_1,extraout_x1_00,uVar9,
                    *(longlong *)(param_1 + 0x1b38) + (uVar6 & 0xffffffff) * 0x218 + 0x10,
                    uVar6 & 0xffffffff);
      iVar5 = 1;
    }
  }
  else {
    FUN_14000fdc0(param_1,extraout_x1,uVar9,(LPARAM)auStack_260,uVar7);
    iVar5 = 0;
  }
  if (param_4 != '\0' && iVar5 != -1) {
    FUN_14000fff0(param_1,0x402,iVar5);
  }
  return;
}

