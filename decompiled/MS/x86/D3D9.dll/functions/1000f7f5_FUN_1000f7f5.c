/*
 * FUN_1000f7f5 at 1000f7f5
 * undefined4 __fastcall FUN_1000f7f5(int param_1, int * param_2)
 * Address ranges: 1000f7f5-1000fb34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000f7f5(int param_1,int *param_2)

{
  byte bVar1;
  int *this;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_21c;
  uint local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  undefined2 local_174;
  undefined4 local_172;
  undefined4 local_16e;
  undefined4 local_168;
  int local_164;
  uint local_160;
  undefined4 local_15c;
  undefined1 local_158 [288];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_18;
  int local_14;
  int *local_c;
  uint local_8;
  
  uVar7 = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  iVar4 = 4;
  puVar2 = local_158;
  local_c = param_2;
  do {
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 0x18;
  } while (iVar4 != 0);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_21c = 1;
  local_218 = 2;
  local_214 = 0;
  local_20c = 0;
  local_16e = 0xffffffff;
  local_172 = 0xffffffff;
  local_174 = 0xffff;
  local_210 = 0xff17;
  local_208 = 0xff00;
  local_17c = 0;
  local_178 = 0;
  FUN_1000f7b5(&local_21c);
  FUN_100017a7(&local_18,0x80);
  FUN_100017a7(&local_24,0x80);
  iVar4 = 0;
  while( true ) {
    pbVar5 = (byte *)(iVar4 * 0x14 + param_1);
    bVar1 = *pbVar5;
    if (bVar1 == 0xff) goto LAB_1000f927;
    if ((bVar1 & 0x7f) == 0x1e) break;
    if ((char)bVar1 < '\0') {
      FUN_1000f39a(&local_21c,(int *)&local_18,pbVar5);
    }
    else {
      FUN_1000ec16(&local_21c,(int *)&local_18,pbVar5);
    }
    iVar4 = iVar4 + 1;
  }
  local_30 = 1;
  do {
    pbVar5 = (byte *)(iVar4 * 0x14 + param_1);
    if ((char)*pbVar5 < '\0') {
      FUN_1000f39a(&local_21c,(int *)&local_24,pbVar5);
    }
    else {
      FUN_1000ec16(&local_21c,(int *)&local_24,pbVar5);
    }
    iVar4 = iVar4 + 1;
  } while (*(char *)(param_1 + iVar4 * 0x14) != -1);
LAB_1000f927:
  FUN_1000f71e(&local_21c,(int *)&local_18,'\x01');
  uVar8 = 0;
  local_8 = local_17c | local_184;
  local_178 = local_178 | local_180;
  iVar4 = 0x10;
  local_17c = local_8;
  do {
    if (((*(byte *)((int)&local_8 + ((int)uVar7 >> 3)) >> (uVar7 & 7) & 1) != 0) &&
       ((&DAT_100d4bf0)[uVar7] != '\0')) {
      FUN_10001877(local_c,uVar7,0,0x30ff02,0xffffffff,0,0);
      uVar8 = uVar8 + 1;
      local_8 = local_17c;
    }
    this = local_c;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  local_8 = uVar8;
  FUN_10001877(local_c,local_21c,0x210,0x8902,0x80000004,uVar8 * 4 + 4,0);
  FUN_10001877(this,local_218,0x210,0x8902,0x80000004,uVar8 * 4 + 8,0);
  FUN_10001877(this,local_214,0x210,0x8902,0x80000004,uVar8 * 4 + 0xc,0);
  local_2c = this[1] - *this;
  FUN_10001829(this,local_18,local_14 - (int)local_18);
  do {
    local_8 = local_17c;
    if (((*(byte *)((int)&local_8 + ((int)(iVar4 - 1U) >> 3)) >> (iVar4 - 1U & 7) & 1) != 0) &&
       ((&UNK_100d4bef)[iVar4] != '\0')) {
      FUN_10001877(this,iVar4 - 1,0,0x8f02,0xffffffff,0,0);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_10001877(this,0xffffffff,0,0xc301,0xffffffff,0,0);
  local_28 = this[1] - *this;
  FUN_10001829(this,local_24,local_20 - (int)local_24);
  local_8 = 0;
  if (local_160 != 0) {
    if (local_160 == 0) {
      iVar4 = 0;
      goto LAB_1000fac3;
    }
    do {
      iVar4 = local_164 + 8 + local_8 * 0x20;
LAB_1000fac3:
      local_c = (int *)0x0;
      if (*(int *)(iVar4 + 0xc) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)(iVar4 + 8) + (int)local_c * 4);
          if ((int)uVar7 < 0) {
            iVar6 = (uVar7 & 0x7fffffff) + local_28;
          }
          else {
            iVar6 = uVar7 + local_2c;
          }
          *(int *)(iVar6 + -4 + *this) = (*(int *)(iVar4 + 4) - iVar6) + local_28;
          local_c = (int *)((int)local_c + 1);
        } while (local_c < *(int **)(iVar4 + 0xc));
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_160);
  }
  thunk_FUN_100cfd6c(local_24);
  thunk_FUN_100cfd6c(local_18);
  uVar3 = FUN_1000fb35((int)&local_21c);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

