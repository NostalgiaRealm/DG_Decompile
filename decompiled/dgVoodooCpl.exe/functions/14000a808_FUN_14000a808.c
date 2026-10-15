/*
 * FUN_14000a808 at 14000a808
 * undefined __fastcall FUN_14000a808(longlong param_1, uint param_2, char param_3)
 * Address ranges: 14000a808-14000a9b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000a808(longlong param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  LRESULT LVar5;
  HWND pHVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar10 = *(uint *)(param_1 + 0x1b40);
  uVar3 = FUN_14000e270(param_1,0x402,(ulonglong)param_2);
  if (uVar3 < uVar10) {
    uVar10 = *(uint *)(param_1 + 0x1b40);
    if (uVar3 < uVar10) {
      uVar12 = uVar3 + 1;
      if (uVar12 < uVar10) {
        do {
          lVar9 = *(longlong *)(param_1 + 0x1b38);
          lVar8 = (ulonglong)(uVar12 - 1) * 0x218;
          lVar11 = (ulonglong)uVar12 * 0x218;
          puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *(undefined4 *)(lVar9 + lVar8) = *(undefined4 *)(lVar9 + lVar11);
          *(undefined8 *)(lVar9 + 8 + lVar8) = *(undefined8 *)(lVar9 + 8 + lVar11);
          puVar4 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          lVar9 = 2;
          do {
            uVar2 = puVar4[1];
            *puVar7 = *puVar4;
            puVar7[1] = uVar2;
            uVar2 = puVar4[3];
            puVar7[2] = puVar4[2];
            puVar7[3] = uVar2;
            uVar2 = puVar4[5];
            puVar7[4] = puVar4[4];
            puVar7[5] = uVar2;
            uVar2 = puVar4[7];
            puVar7[6] = puVar4[6];
            puVar7[7] = uVar2;
            uVar2 = puVar4[9];
            puVar7[8] = puVar4[8];
            puVar7[9] = uVar2;
            uVar2 = puVar4[0xb];
            puVar7[10] = puVar4[10];
            puVar7[0xb] = uVar2;
            uVar2 = puVar4[0xd];
            puVar7[0xc] = puVar4[0xc];
            puVar7[0xd] = uVar2;
            puVar1 = puVar4 + 0xe;
            uVar2 = puVar4[0xf];
            puVar4 = puVar4 + 0x10;
            puVar7[0xe] = *puVar1;
            puVar7[0xf] = uVar2;
            puVar7 = puVar7 + 0x10;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          uVar12 = uVar12 + 1;
          *(undefined4 *)puVar7 = *(undefined4 *)puVar4;
          uVar10 = *(uint *)(param_1 + 0x1b40);
        } while (uVar12 < uVar10);
      }
      *(uint *)(param_1 + 0x1b40) = uVar10 - 1;
    }
    uVar10 = 0;
    LVar5 = FUN_14000e230(param_1,0x402);
    if ((int)LVar5 != 0) {
      do {
        uVar12 = FUN_14000e270(param_1,0x402,(ulonglong)uVar10);
        if (uVar3 < uVar12) {
          pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
          SendMessageW(pHVar6,0x151,(ulonglong)uVar10,(ulonglong)(uVar12 - 1));
        }
        uVar10 = uVar10 + 1;
        LVar5 = FUN_14000e230(param_1,0x402);
      } while (uVar10 < (uint)LVar5);
    }
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    SendMessageA(pHVar6,0x144,(ulonglong)param_2,0);
    if (param_3 == '\0') {
      FUN_14000e4a0(param_1,0x402,0);
      FUN_14000a2e0(param_1);
    }
  }
  return;
}

