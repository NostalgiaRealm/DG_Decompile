/*
 * FUN_1001bcd5 at 1001bcd5
 * undefined4 __thiscall FUN_1001bcd5(void * this, LPCVOID param_1)
 * Address ranges: 1001bcd5-1001bea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001bcd5(void *this,LPCVOID param_1)

{
  LPCVOID lpAddress;
  byte *pbVar1;
  int iVar2;
  SIZE_T SVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  _MEMORY_BASIC_INFORMATION local_54;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = this;
  (**(code **)(*(int *)this + 0x44))();
  if ((*(char *)((int)this + 0x124) != '\0') || (*(char *)((int)this + 0x125) != '\0')) {
    (**(code **)(*(int *)this + 0x28))(1,1);
  }
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*(int *)this + 0x2c))(local_8);
    lpAddress = *(LPCVOID *)(iVar2 + 0x54);
    if ((lpAddress <= param_1) &&
       (param_1 < (LPCVOID)(((uint)(*(char *)(iVar2 + 0x7c) != '\0') * 2 + 2) *
                            *(int *)(*(int *)((int)this + 4) + 0x9c) * *(int *)(iVar2 + 0x58) +
                           (int)lpAddress))) break;
    local_8 = local_8 + 1;
    if (2 < local_8) {
      return local_8 & 0xffffff00;
    }
  }
  uVar7 = (int)param_1 - (int)lpAddress;
  uVar8 = uVar7 & 0xffff8000;
  if ((*(char *)(iVar2 + 0x81) != '\0') &&
     (SVar3 = VirtualQuery(lpAddress,&local_54,0x1c), SVar3 != 0)) {
    VirtualProtect((LPVOID)(*(int *)(iVar2 + 0x54) + uVar8),0x8000,local_54.Protect & 0xfffffeff,
                   &local_28);
  }
  (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x3160) + 4))(0,0);
  if ((*(byte *)(iVar2 + 0x82) & 2) != 0) {
    FUN_10021e9a(iVar2);
  }
  local_c = uVar7 >> 0xf;
  uVar4 = uVar7 >> 0x14;
  local_28 = local_c & 0x1f;
  if ((*(byte *)(iVar2 + 0x84 + uVar4 * 4 + ((int)local_28 >> 3)) >> (local_c & 7) & 1) == 0) {
    local_14 = CONCAT31((uint3)(uVar7 >> 0x1c),*(byte *)(iVar2 + 0x7c));
    local_1c = uVar8 + 0x8000;
    local_18 = *(int *)(iVar2 + 0x58);
    local_20 = *(uint *)(iVar2 + 0x20);
    local_24 = uVar4;
    puVar5 = FUN_10021b1f(uVar8,local_1c,&local_54.RegionSize,local_20,*(uint *)(iVar2 + 0x24),
                          local_18,*(byte *)(iVar2 + 0x7c));
    local_38 = *puVar5;
    local_34 = puVar5[1];
    local_30 = puVar5[2];
    local_2c = puVar5[3];
    uVar7 = local_34;
    if ((local_c != 0) &&
       (uVar4 = local_c - 1,
       (*(byte *)(iVar2 + 0x84 + (uVar4 >> 5) * 4 + ((int)(uVar4 & 0x1f) >> 3)) >> (uVar4 & 7) & 1)
       == 0)) {
      uVar7 = local_34 - 2;
    }
    iVar6 = (local_30 != 0) + 1 + local_2c;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    if (*(int *)(local_10[1] + 0x9c) < iVar6) {
      iVar6 = *(int *)(local_10[1] + 0x9c);
    }
    uVar4 = (**(code **)(*local_10 + 0x38))
                      (local_8,0,uVar7,local_20,iVar6,uVar8,local_1c,*(undefined4 *)(iVar2 + 0x54),
                       local_18,local_14);
    pbVar1 = (byte *)(iVar2 + 0x84 + local_24 * 4 + ((int)local_28 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (local_28 & 7);
  }
  *(byte *)(iVar2 + 0x82) = *(byte *)(iVar2 + 0x82) & 0xfd | 1;
  return CONCAT31((int3)(uVar4 >> 8),1);
}

