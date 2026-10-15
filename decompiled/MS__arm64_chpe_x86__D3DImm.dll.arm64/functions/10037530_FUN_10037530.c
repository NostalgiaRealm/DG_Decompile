/*
 * FUN_10037530 at 10037530
 * undefined FUN_10037530(void)
 * Address ranges: 10037530-1003769b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037530(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if (param_3 != 0) {
    uVar2 = param_1 + 0x80;
    uVar3 = param_3 + 0x1cb0;
    uVar11 = 0;
    if ((param_3 + 0x1cac < uVar2 || param_1 + 0x1d2cU < param_3) &&
       (param_3 + 0x395c < uVar2 || param_1 + 0x1d2cU < uVar3)) {
      do {
        puVar4 = (ulonglong *)(uVar3 + uVar11 * 4);
        puVar5 = (ulonglong *)(uVar2 + uVar11 * 4);
        uVar9 = *puVar4;
        puVar6 = (ulonglong *)(param_3 + uVar11 * 4);
        uVar11 = uVar11 + 4;
        uVar10 = *puVar6;
        puVar5[1] = puVar5[1] ^ (puVar5[1] ^ puVar6[1]) & puVar4[1];
        *puVar5 = *puVar5 ^ (*puVar5 ^ uVar10) & uVar9;
      } while (uVar11 < 0x72c);
    }
    else {
      do {
        puVar7 = (uint *)(uVar2 + uVar11 * 4);
        uVar8 = *(uint *)(uVar3 + uVar11 * 4);
        iVar1 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *puVar7 = *(uint *)(param_3 + iVar1) & uVar8 | *puVar7 & (uVar8 ^ 0xffffffff);
      } while (uVar11 < 0x72c);
    }
    *(uint *)(param_1 + 0x1d30) = *(uint *)(param_1 + 0x1d30) | *(uint *)(param_3 + 0x3960);
    *(uint *)(param_1 + 0x1d34) = *(uint *)(param_3 + 0x3964) | *(uint *)(param_1 + 0x1d34);
    *(uint *)(param_1 + 0x1d38) = *(uint *)(param_3 + 0x3968) | *(uint *)(param_1 + 0x1d38);
    *(uint *)(param_1 + 0x1d3c) = *(uint *)(param_3 + 0x396c) | *(uint *)(param_1 + 0x1d3c);
    *(uint *)(param_1 + 0x1d40) = *(uint *)(param_3 + 0x3970) | *(uint *)(param_1 + 0x1d40);
    *(uint *)(param_1 + 0x1d44) = *(uint *)(param_3 + 0x3974) | *(uint *)(param_1 + 0x1d44);
    *(uint *)(param_1 + 0x1d48) = *(uint *)(param_3 + 0x3978) | *(uint *)(param_1 + 0x1d48);
    *(uint *)(param_1 + 0x1d4c) = *(uint *)(param_3 + 0x397c) | *(uint *)(param_1 + 0x1d4c);
  }
  return;
}

