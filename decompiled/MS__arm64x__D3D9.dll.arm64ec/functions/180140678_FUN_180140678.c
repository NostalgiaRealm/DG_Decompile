/*
 * FUN_180140678 at 180140678
 * undefined FUN_180140678(void)
 * Address ranges: 180140678-1801407ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180140678(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_x4;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong extraout_x11;
  code *extraout_x11_00;
  longlong extraout_x12;
  longlong extraout_x15;
  undefined1 auVar10 [16];
  undefined8 local_840;
  uint local_838 [510];
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 8);
  uVar5 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    lVar2 = param_1 + 0x214;
    do {
      lVar8 = uVar5 << 5;
      lVar6 = param_1 + (ulonglong)*(byte *)(lVar2 + uVar5) * 8;
      bVar3 = *(byte *)(lVar6 + 0x19);
      auVar10 = FUN_18018e3e8(bVar3);
      cVar4 = *(char *)(lVar6 + 0x14);
      *(uint *)((longlong)local_838 + lVar8) = bVar3 & 0xf;
      bVar3 = *(byte *)(lVar6 + 0x18);
      *(longlong *)((longlong)&local_840 + lVar8) = auVar10._0_8_;
      *(int *)((longlong)local_838 + lVar8 + 8) = (int)cVar4;
      *(undefined4 *)((longlong)local_838 + lVar8 + 4) =
           *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar3 * 4);
      *(uint *)(extraout_x15 + lVar8) = (uint)*(byte *)(lVar6 + 0x17) << 2;
      if (auVar10._8_8_ == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(auVar10._8_8_ + (ulonglong)(uint)(int)cVar4 * 4);
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
      *(uint *)(extraout_x12 + lVar8) = (uint)(iVar9 != 0);
      *(int *)(extraout_x11 + lVar8) = iVar9;
    } while (uVar1 < (uint)uVar7);
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11_00)(in_x4,&local_840);
  return 0;
}

