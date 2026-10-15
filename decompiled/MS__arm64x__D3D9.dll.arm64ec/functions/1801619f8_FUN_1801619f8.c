/*
 * FUN_1801619f8 at 1801619f8
 * undefined FUN_1801619f8(void)
 * Address ranges: 1801619f8-180161afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801619f8(longlong param_1,longlong param_2,longlong param_3)

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
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong extraout_x11;
  longlong extraout_x12;
  longlong extraout_x15;
  undefined1 auVar13 [16];
  undefined8 local_840;
  uint local_838 [4];
  undefined1 local_828 [4];
  undefined1 local_824 [2020];
  
  uVar9 = (ulonglong)*(uint *)(param_2 + 8);
  uVar7 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    lVar2 = param_2 + 0x214;
    puVar11 = local_828;
    puVar10 = local_824;
    do {
      lVar6 = uVar7 * 0x20;
      lVar3 = param_2 + (ulonglong)*(byte *)(lVar2 + uVar7) * 8;
      bVar4 = *(byte *)(lVar3 + 0x19);
      uVar8 = uVar7;
      auVar13 = FUN_18018e3e8(bVar4);
      param_2 = auVar13._8_8_;
      cVar5 = *(char *)(lVar3 + 0x14);
      local_838[uVar7 * 8] = bVar4 & 0xf;
      bVar4 = *(byte *)(lVar3 + 0x18);
      (&local_840)[uVar7 * 4] = auVar13._0_8_;
      *(int *)(extraout_x12 + lVar6) = (int)cVar5;
      *(undefined4 *)(extraout_x15 + lVar6) = *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar4 * 4)
      ;
      *(uint *)(extraout_x11 + lVar6) = (uint)*(byte *)(lVar3 + 0x17) << 2;
      if (param_3 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(param_3 + (ulonglong)(uint)(int)cVar5 * 4);
      }
      uVar1 = (int)uVar8 + 1;
      uVar7 = (ulonglong)uVar1;
      *(uint *)(puVar11 + lVar6) = (uint)(iVar12 != 0);
      *(int *)(puVar10 + lVar6) = iVar12;
    } while (uVar1 < (uint)uVar9);
  }
  FUN_180204620(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 + 0x22c0,
                &local_840);
  return;
}

