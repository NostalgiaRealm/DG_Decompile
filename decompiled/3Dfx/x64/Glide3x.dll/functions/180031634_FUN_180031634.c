/*
 * FUN_180031634 at 180031634
 * ulonglong __fastcall FUN_180031634(longlong param_1, int * param_2, longlong * param_3, ushort param_4)
 * Address ranges: 180031634-18003191c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180031634(longlong param_1,int *param_2,longlong *param_3,ushort param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  ushort uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar4 = *(int *)(param_1 + 0x74);
  uVar10 = (ulonglong)(-(uint)(iVar4 != 0) & 4);
  if (((*(int *)(&DAT_18006cd90 + uVar10 * 4) != 0xff) ||
      (*(int *)(&DAT_18006cd94 + (ulonglong)(-(uint)(iVar4 != 0) & 4) * 4) != 0xff)) ||
     (uVar7 = (ulonglong)(uint)-iVar4,
     *(int *)(&DAT_18006cd98 + (ulonglong)(-(uint)(iVar4 != 0) & 4) * 4) != 0xff)) {
    uVar5 = FUN_18002d8e4(param_2,param_4,0,0,0,0,7,param_3);
    uVar9 = (uint)uVar5;
    if (((uVar9 & 0xf0) != 0x80) && ((uVar9 & 0xf0) != 0xf0)) {
      uVar5 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
      uVar9 = (uint)uVar5;
    }
    uVar5 = (ushort)uVar9;
    FUN_18002f4ec(param_2,param_3,param_4,0xa4,uVar5,uVar5,7,0.01,'\x01');
    FUN_18002d0b8((longlong)param_2,uVar5,7);
    uVar6 = FUN_18002d8ac((longlong)param_2,uVar9,0xa4);
    FUN_18002d248(param_2,0,uVar5,(byte)uVar6,0,'\0');
    bVar8 = 0;
    if (((byte)uVar9 & 0xf0) == 0x80) {
      bVar8 = (byte)((uint)param_2[(ulonglong)(uVar9 & 0xf) + 0x26] >> 0x12) & 3;
    }
    uStack_54 = *(undefined4 *)(&DAT_18006cd90 + uVar10 * 4);
    uStack_50 = *(undefined4 *)(&DAT_18006cd94 + (ulonglong)(-(uint)(iVar4 != 0) & 4) * 4);
    if (bVar8 == 0) {
      uStack_4c = 0;
      local_58 = uStack_54;
      uStack_54 = uStack_50;
      uStack_50 = *(undefined4 *)(&DAT_18006cd98 + (ulonglong)(-(uint)(iVar4 != 0) & 4) * 4);
    }
    else {
      local_58 = 0;
      uStack_4c = *(undefined4 *)(&DAT_18006cd98 + (ulonglong)(-(uint)(iVar4 != 0) & 4) * 4);
    }
    param_2[0x60] = 0x4e46;
    puVar1 = (uint *)(param_2 + 0x5f);
    *puVar1 = 5;
    puVar2 = (uint *)(param_2 + 0x57);
    *(ulonglong *)(param_2 + 0x61) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(param_2 + 99) = CONCAT44(uStack_4c,uStack_50);
    puVar3 = (uint *)(param_2 + 0x4f);
    FUN_180057998(param_3,(*puVar1 + *puVar2 + *puVar3) * 0x1000000 + 0x1000000 & 0x7f000000 | 1,
                  puVar3,puVar2,puVar1,(uint *)0x0);
    FUN_180057998(param_3,(*puVar2 + *puVar3) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x56,puVar3,
                  puVar2,(uint *)0x0,(uint *)0x0);
    FUN_18002d0b8((longlong)param_2,0x70,7);
    FUN_18002d248(param_2,0,uVar5,0xa4,0,'\0');
    param_2[0x61] = 0x3b808081;
    param_2[0x62] = 0x3b808081;
    param_2[99] = 0x3b808081;
    param_2[100] = 0x3b808081;
    *puVar1 = 5;
    param_2[0x60] = 0x4006;
    uVar7 = FUN_180057998(param_3,(*puVar3 + *puVar2) * 0x1000000 + 0x6000000 & 0x7f000000 | 0x2038,
                          puVar3,puVar2,puVar1,(uint *)0x0);
    if (uVar5 != param_4) {
      uVar7 = FUN_18002d870((longlong)param_2,uVar5);
    }
  }
  return uVar7;
}

