/*
 * FUN_100339fd at 100339fd
 * undefined __fastcall FUN_100339fd(int param_1, int param_2, uint param_3, uint param_4, int param_5, int param_6)
 * Address ranges: 100339fd-10033c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_100339fd(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  int iVar7;
  uint uVar8;
  uint local_18;
  
  if (param_5 == 0) {
    local_18 = 0;
    if (param_4 != 0) {
      do {
        if (param_3 != 0) {
          uVar8 = 0;
          do {
            uVar2 = *(uint *)(param_1 + uVar8 * 4);
            auVar6[0xc] = (char)(uVar2 >> 0x18);
            auVar6._0_12_ = ZEXT712(0);
            iVar7 = uVar8 * 0x10;
            uVar8 = uVar8 + 1;
            pfVar1 = (float *)(iVar7 + local_18 * 0x40 + param_6);
            *pfVar1 = (float)(uVar2 & 0xff);
            pfVar1[1] = (float)(uVar2 >> 8 & 0xff);
            pfVar1[2] = (float)(int)CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar2 >> 0x10));
            pfVar1[3] = (float)(uint3)(auVar6._10_3_ >> 0x10);
          } while (uVar8 < param_3);
        }
        param_1 = param_1 + param_2;
        local_18 = local_18 + 1;
      } while (local_18 < param_4);
    }
  }
  else if (param_5 == 1) {
    local_18 = 0;
    if (param_4 != 0) {
      do {
        if (param_3 != 0) {
          uVar8 = 0;
          do {
            uVar2 = *(uint *)(param_1 + uVar8 * 4);
            auVar5[0xc] = (char)(uVar2 >> 0x18);
            auVar5._0_12_ = ZEXT712(0);
            iVar7 = uVar8 * 0x10;
            uVar8 = uVar8 + 1;
            pfVar1 = (float *)(iVar7 + local_18 * 0x40 + param_6);
            *pfVar1 = (float)(int)CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar2 >> 0x10));
            pfVar1[1] = (float)(uVar2 >> 8 & 0xff);
            pfVar1[2] = (float)(uVar2 & 0xff);
            pfVar1[3] = (float)(uint3)(auVar5._10_3_ >> 0x10);
          } while (uVar8 < param_3);
        }
        param_1 = param_1 + param_2;
        local_18 = local_18 + 1;
      } while (local_18 < param_4);
    }
  }
  else if (param_5 == 2) {
    local_18 = 0;
    if (param_4 != 0) {
      do {
        if (param_3 != 0) {
          uVar8 = 0;
          do {
            uVar2 = *(uint *)(param_1 + uVar8 * 4);
            auVar4[0xc] = (char)(uVar2 >> 0x18);
            auVar4._0_12_ = ZEXT712(0);
            iVar7 = uVar8 * 0x10;
            uVar8 = uVar8 + 1;
            pfVar1 = (float *)(iVar7 + local_18 * 0x40 + param_6);
            *pfVar1 = (float)(uVar2 >> 8 & 0xff);
            pfVar1[1] = (float)(int)CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar2 >> 0x10));
            pfVar1[2] = (float)(uint3)(auVar4._10_3_ >> 0x10);
            pfVar1[3] = (float)(uVar2 & 0xff);
          } while (uVar8 < param_3);
        }
        param_1 = param_1 + param_2;
        local_18 = local_18 + 1;
      } while (local_18 < param_4);
    }
  }
  else if ((param_5 == 3) && (local_18 = 0, param_4 != 0)) {
    do {
      if (param_3 != 0) {
        uVar8 = 0;
        do {
          uVar2 = *(uint *)(param_1 + uVar8 * 4);
          auVar3[0xc] = (char)(uVar2 >> 0x18);
          auVar3._0_12_ = ZEXT712(0);
          iVar7 = uVar8 * 0x10;
          uVar8 = uVar8 + 1;
          pfVar1 = (float *)(iVar7 + local_18 * 0x40 + param_6);
          *pfVar1 = (float)(uint3)(auVar3._10_3_ >> 0x10);
          pfVar1[1] = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar2 >> 0x10));
          pfVar1[2] = (float)(uVar2 >> 8 & 0xff);
          pfVar1[3] = (float)(uVar2 & 0xff);
        } while (uVar8 < param_3);
      }
      param_1 = param_1 + param_2;
      local_18 = local_18 + 1;
    } while (local_18 < param_4);
  }
  return;
}

