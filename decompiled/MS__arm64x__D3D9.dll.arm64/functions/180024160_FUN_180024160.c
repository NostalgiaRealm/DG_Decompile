/*
 * FUN_180024160 at 180024160
 * undefined FUN_180024160(void)
 * Address ranges: 180024160-180024347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180024160(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,int param_7,uint param_8,int param_9,int param_10,
                  int *param_11,undefined8 param_12,undefined8 param_13,int param_14,int param_15,
                  undefined1 param_16)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined2 local_85;
  uint local_80;
  uint uStack_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  bVar3 = 1;
  if (param_8 != 0) {
    uVar4 = 0;
    uStack_7c = -param_15;
    local_80 = -param_14;
    local_78 = param_6;
    local_74 = param_7;
    local_70 = param_4;
    local_6c = param_5;
    local_68 = param_3;
    uStack_60 = param_2;
    local_58 = param_1;
    do {
      if (bVar3 == 0) {
        return 0;
      }
      local_85 = 0x100;
      local_90 = 0;
      local_88 = 0;
      local_87 = param_16;
      local_86 = param_16;
      uStack_a8 = 0;
      local_b0 = 0;
      local_98 = 0;
      local_a0 = 0;
      (*__imp_USER32_dll_SetRect)
                (&local_a0,*param_11 >> (uVar4 & 0x1f),param_11[1] >> (uVar4 & 0x1f),
                 param_11[2] >> (uVar4 & 0x1f),param_11[3] >> (uVar4 & 0x1f));
      (*__imp_USER32_dll_SetRect)
                (&local_b0,(int)param_12 >> (uVar4 & 0x1f),param_12._4_4_ >> (uVar4 & 0x1f),
                 (int)param_13 >> (uVar4 & 0x1f),param_13._4_4_ >> (uVar4 & 0x1f));
      if ((param_9 == param_10) && (param_9 - 0xeU < 7)) {
        local_a0 = CONCAT44(uStack_7c & local_a0._4_4_,local_80 & (uint)local_a0);
        local_98 = CONCAT44((local_98._4_4_ + param_15) - 1U & uStack_7c,
                            ((int)local_98 + param_14) - 1U & local_80);
        local_b0 = CONCAT44(uStack_7c & local_b0._4_4_,local_80 & (uint)local_b0);
        uStack_a8 = CONCAT44((uStack_a8._4_4_ + param_15) - 1U & uStack_7c,
                             ((int)uStack_a8 + param_14) - 1U & local_80);
      }
      iVar2 = (*__imp_USER32_dll_IsRectEmpty)(&local_a0);
      if ((iVar2 == 0) && (iVar2 = (*__imp_USER32_dll_IsRectEmpty)(&local_b0), iVar2 == 0)) {
        bVar1 = (**(code **)(*local_68 + 0x108))
                          (local_68,uVar4 + local_74,local_6c,uVar4 + local_78,local_70,local_58,
                           uStack_60,&local_b0);
        bVar3 = bVar1 & bVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_8);
  }
  return bVar3;
}

