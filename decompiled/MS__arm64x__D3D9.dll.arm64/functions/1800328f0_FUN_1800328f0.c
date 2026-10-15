/*
 * FUN_1800328f0 at 1800328f0
 * undefined FUN_1800328f0(void)
 * Address ranges: 1800328f0-1800329ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800328f0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong extraout_x11;
  longlong extraout_x12;
  longlong extraout_x13;
  longlong extraout_x14;
  longlong extraout_x15;
  undefined1 auVar11 [16];
  undefined8 local_850;
  undefined8 local_848;
  uint local_840 [512];
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 8);
  uVar7 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    lVar2 = param_1 + 0x214;
    do {
      lVar6 = uVar7 * 0x20;
      lVar3 = param_1 + (ulonglong)*(byte *)(lVar2 + uVar7) * 8;
      bVar4 = *(byte *)(lVar3 + 0x19);
      uVar8 = uVar7;
      auVar11 = FUN_180079d90(bVar4);
      cVar5 = *(char *)(lVar3 + 0x14);
      local_840[uVar7 * 8] = bVar4 & 0xf;
      bVar4 = *(byte *)(lVar3 + 0x18);
      (&local_848)[uVar7 * 4] = auVar11._0_8_;
      *(int *)(extraout_x14 + lVar6) = (int)cVar5;
      *(undefined4 *)(extraout_x15 + lVar6) = *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar4 * 4)
      ;
      *(uint *)(extraout_x13 + lVar6) = (uint)*(byte *)(lVar3 + 0x17) << 2;
      if (auVar11._8_8_ == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(auVar11._8_8_ + (ulonglong)(uint)(int)cVar5 * 4);
      }
      uVar1 = (int)uVar8 + 1;
      uVar7 = (ulonglong)uVar1;
      *(uint *)(extraout_x12 + lVar6) = (uint)(iVar10 != 0);
      *(int *)(extraout_x11 + lVar6) = iVar10;
    } while (uVar1 < (uint)uVar9);
  }
  local_850 = 0;
  (**(code **)(*param_5 + 0x58))(param_5,&local_848,uVar7,param_3,param_4 & 0xffffffff,&local_850);
  return local_850;
}

