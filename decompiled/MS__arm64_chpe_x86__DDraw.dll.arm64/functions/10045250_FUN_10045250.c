/*
 * FUN_10045250 at 10045250
 * undefined FUN_10045250(void)
 * Address ranges: 10045250-1004546f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10045250(int param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar10;
  
  iVar4 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar4 == 0) {
    FUN_10001c10(0);
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + 0x70);
  puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + 0x6c);
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar3 = (*extraout_w11)(uVar5,*puVar8,*puVar7);
  if (cVar3 != '\0') {
    uVar9 = 0;
    if (*(uint *)(param_1 + 0x24) != 0) {
      do {
        iVar4 = *(int *)(param_1 + 0x20) + uVar9 * 0x20;
        if ((*(uint *)(iVar4 + 0x18) >> 1 & 1) != 0) {
          *(undefined1 *)(iVar4 + 0x1c) = 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x24));
    }
  }
  uVar5 = 0x80070057;
  iVar4 = FUN_10091750(param_2,&DAT_100c2980,0x10);
  if ((iVar4 != 0) && (param_4 != (uint *)0x0)) {
    uVar9 = *(uint *)(param_1 + 0x24);
    uVar5 = 0x887600ff;
    if (uVar9 != 0) {
      iVar4 = *(int *)(param_1 + 0x20);
      uVar10 = 0;
      do {
        iVar1 = iVar4 + uVar10 * 0x20;
        iVar6 = FUN_10091750(iVar1,param_2,0x10);
        if (iVar6 == 0) {
          uVar5 = 0x887602b3;
          if (*(char *)(iVar1 + 0x1c) != '\0') break;
          uVar9 = *(uint *)(iVar1 + 0x14);
          uVar5 = 0x887602b2;
          if (uVar9 == 0) {
            if (*param_4 < 4) {
              *param_4 = 4;
              break;
            }
            uVar5 = 0x80070057;
            if (param_3 == (undefined4 *)0x0) break;
            *param_3 = *(undefined4 *)(iVar1 + 0x10);
            uVar5 = (*pcVar2)();
            (*extraout_w11_00)(uVar5);
          }
          else {
            if (*param_4 < uVar9) {
              *param_4 = uVar9;
              break;
            }
            uVar5 = 0x80070057;
            if (param_3 == (undefined4 *)0x0) break;
            FUN_100917a0(param_3,*(undefined4 *)(iVar1 + 0x10));
          }
          uVar5 = 0;
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar5;
}

