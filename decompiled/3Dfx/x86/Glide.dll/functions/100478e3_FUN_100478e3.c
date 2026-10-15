/*
 * FUN_100478e3 at 100478e3
 * uint __thiscall FUN_100478e3(void * this, uint * param_1)
 * Address ranges: 100478e3-10047a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100478e3(void *this,uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_40 [5];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  void *local_8;
  
  puVar6 = param_1;
  puVar7 = local_40;
  local_8 = this;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((local_40[0] != 0x55) && (local_40[0] != 0xd5)) {
    local_2c = 0;
  }
  if ((int)local_40[0] < 0x80) {
    local_28 = 1;
  }
  iVar3 = FUN_10047b1e(local_8,local_40);
  pvVar1 = local_8;
  if (iVar3 != 0) {
    uVar5 = 0;
    uVar2 = 0xffffffff;
    do {
      local_c = uVar5 * 0x24;
      uVar4 = uVar2;
      if (*(int *)(iVar3 + 0x1c + local_c) == 0) {
        uVar4 = uVar5;
        if (uVar2 != 0xffffffff) {
          uVar4 = uVar2;
        }
      }
      else if ((((param_1[4] == *(uint *)(iVar3 + local_c)) &&
                (param_1[7] == *(uint *)(iVar3 + 4 + local_c))) &&
               (param_1[9] == *(uint *)(iVar3 + 0xc + local_c))) &&
              (param_1[0xc] == *(uint *)(iVar3 + 0x14 + local_c))) break;
      uVar5 = uVar5 + 1;
      uVar2 = uVar4;
    } while (uVar5 < 0x14);
    if (uVar5 != 0x14) {
      *(undefined1 *)(uVar5 * 0x24 + 0x20 + iVar3) = 1;
      return *(uint *)(uVar5 * 0x24 + 0x1c + iVar3);
    }
    if (uVar4 != 0xffffffff) {
LAB_100479c3:
      puVar6 = (uint *)(uVar4 * 0x24 + iVar3);
      *puVar6 = param_1[4];
      puVar6[1] = param_1[7];
      puVar6[2] = param_1[8];
      puVar6[3] = param_1[9];
      puVar6[4] = param_1[10];
      puVar6[5] = param_1[0xc];
      puVar6[6] = param_1[0xb];
      if (puVar6[7] != 0) {
        FUN_1004171e(*(void **)((int)local_8 + 0xc),*(int *)((int)local_8 + 0x10),(int *)puVar6[7]);
      }
      uVar2 = FUN_100418bb(*(void **)((int)pvVar1 + 0xc),*(int *)((int)pvVar1 + 0x10),param_1);
      *(undefined1 *)(puVar6 + 8) = 1;
      puVar6[7] = uVar2;
      return uVar2;
    }
    uVar4 = 0;
    do {
      if (*(char *)(iVar3 + 0x20 + uVar4 * 0x24) == '\0') goto LAB_100479c3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x14);
  }
  return 0;
}

