/*
 * FUN_180051d00 at 180051d00
 * undefined FUN_180051d00(void)
 * Address ranges: 180051d00-180051dfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051d00(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong extraout_x11;
  longlong extraout_x12;
  longlong extraout_x13;
  longlong extraout_x14;
  longlong extraout_x15;
  undefined1 auVar12 [16];
  undefined1 auStack_830 [24];
  undefined1 local_818 [4];
  undefined1 local_814 [2020];
  
  uVar8 = (ulonglong)*(uint *)(param_2 + 8);
  uVar7 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    lVar2 = param_2 + 0x214;
    puVar10 = local_818;
    puVar9 = local_814;
    do {
      lVar6 = uVar7 * 0x20;
      lVar3 = param_2 + (ulonglong)*(byte *)(lVar2 + uVar7) * 8;
      bVar4 = *(byte *)(lVar3 + 0x19);
      auVar12 = FUN_180079d90(bVar4);
      param_2 = auVar12._8_8_;
      cVar5 = *(char *)(lVar3 + 0x14);
      *(uint *)(extraout_x14 + lVar6) = bVar4 & 0xf;
      bVar4 = *(byte *)(lVar3 + 0x18);
      *(longlong *)(extraout_x15 + lVar6) = auVar12._0_8_;
      *(int *)(extraout_x12 + lVar6) = (int)cVar5;
      *(undefined4 *)(extraout_x13 + lVar6) = *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar4 * 4)
      ;
      *(uint *)(extraout_x11 + lVar6) = (uint)*(byte *)(lVar3 + 0x17) << 2;
      if (param_3 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(param_3 + (ulonglong)(uint)(int)cVar5 * 4);
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      *(uint *)(puVar10 + lVar6) = (uint)(iVar11 != 0);
      *(int *)(puVar9 + lVar6) = iVar11;
    } while (uVar1 < (uint)uVar8);
  }
  FUN_1800ed3b0(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 + 0x22c0,
                auStack_830);
  return;
}

