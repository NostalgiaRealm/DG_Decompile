/*
 * FUN_14000a9b8 at 14000a9b8
 * undefined __fastcall FUN_14000a9b8(longlong param_1, ushort * param_2, longlong param_3, char param_4)
 * Address ranges: 14000a9b8-14000ad32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000a9b8(longlong param_1,ushort *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  LPWSTR pWVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  HWND hWnd;
  longlong lVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined8 local_248 [66];
  
  uVar16 = 0;
  uVar15 = 0;
  pWVar9 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(param_1 + 0x288));
  pWVar10 = CharUpperW((LPWSTR)(ulonglong)*param_2);
  if (pWVar10 == pWVar9) {
    do {
      if (param_2[uVar16] == 0) break;
      uVar16 = (ulonglong)((int)uVar16 + 1);
      pWVar9 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(param_1 + 0x288 + uVar16 * 2));
      pWVar10 = CharUpperW((LPWSTR)(ulonglong)param_2[uVar16]);
    } while (pWVar10 == pWVar9);
  }
  bVar6 = false;
  if ((param_2[uVar16] == 0) && (*(short *)(param_1 + 0x288 + uVar16 * 2) == 0)) {
    bVar6 = true;
    uVar15 = 1;
  }
  bVar19 = false;
  if (*(int *)(param_1 + 0x1b40) != 0) {
    uVar7 = FUN_14000e270(param_1,0x402,0);
    bVar19 = *(int *)((ulonglong)uVar7 * 0x218 + *(longlong *)(param_1 + 0x1b38)) == 1;
  }
  lVar18 = 2;
  puVar13 = local_248;
  lVar11 = 2;
  if (param_3 != 0) {
    uVar15 = 2;
  }
  do {
    uVar12 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    *puVar13 = *(undefined8 *)param_2;
    puVar13[1] = uVar12;
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    puVar13[4] = uVar12;
    puVar13[5] = uVar5;
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    puVar13[6] = uVar3;
    puVar13[7] = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x2c);
    puVar13[8] = uVar12;
    puVar13[9] = uVar5;
    uVar12 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x34);
    puVar13[10] = uVar3;
    puVar13[0xb] = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x3c);
    param_2 = param_2 + 0x40;
    puVar13[0xc] = uVar12;
    puVar13[0xd] = uVar5;
    puVar13[0xe] = uVar3;
    puVar13[0xf] = uVar4;
    puVar13 = puVar13 + 0x10;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined4 *)puVar13 = *(undefined4 *)param_2;
  iVar8 = *(int *)(param_1 + 0x1b44);
  if (*(int *)(param_1 + 0x1b40) == iVar8) {
    uVar7 = 0x10;
    if (iVar8 != 0) {
      uVar7 = iVar8 * 2;
    }
    uVar16 = CONCAT44(0,uVar7);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    uVar12 = SUB168(ZEXT816(0x218) * auVar2,0);
    if (SUB168(ZEXT816(0x218) * auVar2,8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    puVar13 = (undefined8 *)thunk_FUN_14002423c(uVar12);
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    puVar17 = puVar13;
    if (uVar7 != 0) {
      do {
        *(undefined4 *)puVar17 = 0;
        puVar17[1] = 0;
        FUN_14002511c((undefined1 *)(puVar17 + 2),0,0x208);
        puVar17 = puVar17 + 0x43;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    FUN_140024620(puVar13,*(undefined8 **)(param_1 + 0x1b38),
                  (ulonglong)*(uint *)(param_1 + 0x1b44) * 0x218);
    FUN_140024260(*(LPVOID *)(param_1 + 0x1b38));
    *(uint *)(param_1 + 0x1b44) = uVar7;
    *(undefined8 **)(param_1 + 0x1b38) = puVar13;
  }
  iVar8 = 0;
  lVar11 = *(longlong *)(param_1 + 0x1b38);
  lVar14 = (ulonglong)*(uint *)(param_1 + 0x1b40) * 0x218;
  *(uint *)(param_1 + 0x1b40) = *(uint *)(param_1 + 0x1b40) + 1;
  puVar17 = (undefined8 *)(lVar11 + 0x10 + lVar14);
  *(undefined4 *)(lVar14 + lVar11) = uVar15;
  *(longlong *)(lVar14 + 8 + lVar11) = param_3;
  puVar13 = local_248;
  do {
    uVar12 = puVar13[1];
    *puVar17 = *puVar13;
    puVar17[1] = uVar12;
    uVar12 = puVar13[3];
    puVar17[2] = puVar13[2];
    puVar17[3] = uVar12;
    uVar12 = puVar13[5];
    puVar17[4] = puVar13[4];
    puVar17[5] = uVar12;
    uVar12 = puVar13[7];
    puVar17[6] = puVar13[6];
    puVar17[7] = uVar12;
    uVar12 = puVar13[9];
    puVar17[8] = puVar13[8];
    puVar17[9] = uVar12;
    uVar12 = puVar13[0xb];
    puVar17[10] = puVar13[10];
    puVar17[0xb] = uVar12;
    uVar12 = puVar13[0xd];
    puVar17[0xc] = puVar13[0xc];
    puVar17[0xd] = uVar12;
    puVar1 = puVar13 + 0xe;
    uVar12 = puVar13[0xf];
    puVar13 = puVar13 + 0x10;
    puVar17[0xe] = *puVar1;
    puVar17[0xf] = uVar12;
    puVar17 = puVar17 + 0x10;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  *(undefined4 *)puVar17 = *(undefined4 *)puVar13;
  uVar16 = (ulonglong)(*(int *)(param_1 + 0x1b40) - 1);
  if (bVar6) {
    FUN_14000e2a0(param_1,lVar14,puVar17,(LPARAM)local_248,uVar16);
  }
  else {
    uVar16 = FUN_14000e3d0(param_1,0x402,(LPARAM)local_248,uVar16);
    iVar8 = (int)uVar16;
    if ((iVar8 == 0) && (bVar19)) {
      uVar16 = FUN_14000e270(param_1,0x402,1);
      hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
      uVar12 = 0x144;
      SendMessageA(hWnd,0x144,1,0);
      uVar16 = uVar16 & 0xffffffff;
      FUN_14000e2a0(param_1,uVar12,uVar16,uVar16 * 0x218 + *(longlong *)(param_1 + 0x1b38) + 0x10,
                    uVar16);
      iVar8 = 1;
    }
  }
  if ((param_4 != '\0') && (iVar8 != -1)) {
    FUN_14000e4a0(param_1,0x402,iVar8);
  }
  return;
}

