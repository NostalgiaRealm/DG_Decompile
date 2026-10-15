/*
 * FUN_1800afed8 at 1800afed8
 * undefined __fastcall FUN_1800afed8(undefined8 * param_1)
 * Address ranges: 1800afed8-1800b0097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800afed8(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar1 = param_1[0xd11];
  *param_1 = &PTR_FUN_180104558;
  uVar4 = 0;
  param_1[0xd04] = &PTR_LAB_1800fd890;
  param_1[0xd07] = &PTR_LAB_180104128;
  uVar3 = *(uint *)(lVar1 + 0xf8);
  if (uVar3 == 0) {
LAB_1800aff3c:
    if (uVar3 == 0) {
      FUN_1800fbcf0(DAT_1801173e0);
      DAT_1801173e0 = (LPVOID)0x0;
      DAT_1801173e8 = 0;
    }
LAB_1800aff5a:
    FUN_1800ae4bc(param_1[0xd11] + 0xa0);
    FUN_1800fbcf0((LPVOID)param_1[0xd30]);
    FUN_1800fbcf0((LPVOID)param_1[0xd2e]);
    FUN_1800fbcf0((LPVOID)param_1[0xd2c]);
    FUN_1800fbcf0((LPVOID)param_1[0xd29]);
    FUN_1800fbcf0((LPVOID)param_1[0xd26]);
    param_1[0xd26] = 0;
    param_1[0xd27] = 0;
    param_1[0xd28] = 0;
    FUN_1800fbcf0((LPVOID)param_1[0xd22]);
    param_1[0xd22] = 0;
    param_1[0xd23] = 0;
    param_1[0xd24] = 0;
    FUN_1800fbcf0((LPVOID)param_1[0xd1e]);
    param_1[0xd1e] = 0;
    param_1[0xd1f] = 0;
    param_1[0xd20] = 0;
    FUN_1800fbcf0((LPVOID)param_1[0xd1b]);
    param_1[0xd1b] = 0;
    param_1[0xd1c] = 0;
    param_1[0xd1d] = 0;
    FUN_1800fbcf0((LPVOID)param_1[0xd17]);
    param_1[0xd17] = 0;
    param_1[0xd18] = 0;
    param_1[0xd19] = 0;
    FUN_180001354(param_1);
    return;
  }
LAB_1800aff28:
  iVar2 = (int)uVar4;
  if (*(undefined8 **)(*(longlong *)(lVar1 + 0xf0) + uVar4 * 8) != param_1)
  goto code_r0x0001800aff34;
  if (iVar2 != -1) {
    uVar5 = iVar2 + 1;
    if (uVar5 < uVar3) {
      do {
        uVar4 = (ulonglong)uVar5;
        uVar3 = uVar5 - 1;
        uVar5 = uVar5 + 1;
        *(undefined8 *)(*(longlong *)(lVar1 + 0xf0) + (ulonglong)uVar3 * 8) =
             *(undefined8 *)(*(longlong *)(lVar1 + 0xf0) + uVar4 * 8);
      } while (uVar5 < *(uint *)(lVar1 + 0xf8));
    }
    *(int *)(lVar1 + 0xf8) = *(int *)(lVar1 + 0xf8) + -1;
    uVar3 = *(uint *)(lVar1 + 0xf8);
    goto LAB_1800aff3c;
  }
  goto LAB_1800aff5a;
code_r0x0001800aff34:
  uVar4 = (ulonglong)(iVar2 + 1U);
  if (uVar3 <= iVar2 + 1U) goto LAB_1800aff3c;
  goto LAB_1800aff28;
}

