/*
 * FUN_18006724c at 18006724c
 * uint * __fastcall FUN_18006724c(undefined8 param_1, uint * param_2, uint * param_3, longlong * param_4, int param_5, uint param_6, ushort param_7, byte param_8)
 * Address ranges: 18006724c-180067461
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18006724c(undefined8 param_1,uint *param_2,uint *param_3,longlong *param_4,int param_5,
                    uint param_6,ushort param_7,byte param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined7 local_43;
  uint uStack_3c;
  
  uVar5 = (uint)param_7;
  bVar1 = FUN_180067004(param_1,(longlong)param_3,param_7);
  *(byte *)(param_2 + 1) = bVar1;
  *param_2 = 0;
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  uVar2 = uVar5 & 0xf0;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  uVar3 = uVar5 >> 9 & 0x7f ^ (uint)param_8;
  uVar4 = uVar3 << 0x1f;
  if (uVar2 == 0x10) {
    FUN_180067058(0,param_3,param_4);
    uVar4 = uVar4 | param_3[0x86];
  }
  else if (uVar2 == 0x20) {
    uVar2 = param_3[0x87];
    if (uVar2 == 0) {
      uVar2 = FUN_1800ec8c0((longlong)param_3,4,'\x01');
      param_3[0x87] = uVar2;
    }
    uVar4 = uVar4 | uVar2;
  }
  else if (uVar2 == 0x30) {
    if (param_3[0x89] == 0) {
      uVar2 = FUN_1800ec8c0((longlong)param_3,4,'\x01');
      param_3[0x89] = uVar2;
      FUN_1800edbe0(param_3,param_4,0x2036,(ulonglong)uVar2);
    }
    uVar4 = uVar4 | param_3[0x89];
  }
  else if (uVar2 == 0x40) {
    FUN_1800670ec(0,param_3,param_4);
    uVar4 = uVar4 | param_3[0x8a];
  }
  else if (uVar2 == 0x50) {
    uVar4 = uVar4 | param_3[0x1a];
    *(ulonglong *)((longlong)param_2 + 5) = CONCAT17((undefined1)uStack_3c,local_43);
    param_2[3] = uStack_3c;
    param_2[4] = param_5 * 0x40 + 0xe0;
  }
  else if (uVar2 == 0x60) {
    uVar4 = uVar4 | param_3[0x1a];
    *(ulonglong *)((longlong)param_2 + 5) = CONCAT17((undefined1)uStack_3c,local_43);
    param_2[3] = uStack_3c;
    param_2[4] = 0xa0;
  }
  else {
    if (uVar2 != 0x70) {
      if (uVar2 == 0x80) {
        *param_2 = uVar4 | *(uint *)((longlong)param_3 +
                                    (-(ulonglong)((uVar5 & 0x100) != 0) & 0xfffffffffffffffc) + 0xac
                                    );
        param_2[4] = 0;
        *(undefined1 *)(param_2 + 1) = 0xe4;
        if ((uVar5 & 0x100) != 0) {
          return param_2;
        }
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[5] = 0;
        return param_2;
      }
      if (uVar2 != 0xb0) {
        return param_2;
      }
      *param_2 = (int)uVar5 >> 10 | (uVar3 ^ 1) * -0x80000000 + 0x80000000 | 0x410000;
      return param_2;
    }
    uVar4 = uVar4 | param_6;
  }
  *param_2 = uVar4;
  return param_2;
}

