/*
 * FUN_1801e5dd0 at 1801e5dd0
 * undefined FUN_1801e5dd0(void)
 * Address ranges: 1801e5dd0-1801e601b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e5dd0(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_78;
  undefined4 local_70;
  int iStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar7 = 0;
  if (*(short *)(param_1 + 0x3c) != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x40 + uVar7 * 8);
      if ((*(uint *)(lVar4 + 0x48) & 1) != 0) {
        if (*(longlong *)(lVar4 + 0x30) == 0) {
          FUN_18012ff70(lVar4);
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11_02)(lVar4);
          if (*(char *)(lVar4 + 0x27) == '\0') {
            local_78 = 0;
            local_70 = FUN_18012faf0(lVar4);
            iStack_6c = *(ushort *)(lVar4 + 0x16) - 1;
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_04)(lVar4,&local_78);
          }
          else {
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_03)(lVar4);
          }
          iVar8 = 0;
          iVar9 = 0;
LAB_1801e5fd4:
          FUN_18012feb0(lVar4,iVar9,iVar8);
        }
        else {
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11)(lVar4);
          iVar9 = 0;
          iVar8 = 0;
          uVar5 = 0;
          if (*(int *)(lVar4 + 0x40) != 0) {
            uVar6 = 0x80;
            do {
              if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + uVar5) & uVar6) == 0) {
                if (iVar9 != iVar8) {
                  FUN_180130288(lVar4,auStack_68,iVar9,iVar8);
                  (*(code *)puVar2)(0x180224000);
                  (*extraout_x11_00)(lVar4,auStack_68);
                  FUN_18012feb0(lVar4,iVar9,iVar8);
                  iVar9 = iVar8;
                }
                iVar9 = iVar9 + 1;
              }
              iVar8 = iVar8 + 1;
              *(byte *)(*(longlong *)(lVar4 + 0x30) + uVar5) =
                   *(byte *)(*(longlong *)(lVar4 + 0x30) + uVar5) & ~(byte)uVar6;
              bVar3 = uVar6 < 2;
              uVar1 = (uint)uVar5;
              if (bVar3) {
                uVar1 = (uint)uVar5 + 1;
              }
              uVar5 = (ulonglong)uVar1;
              uVar6 = uVar6 >> 1;
              if (bVar3) {
                uVar6 = 0x80;
              }
            } while (uVar1 < *(uint *)(lVar4 + 0x40));
            if (iVar9 != iVar8) {
              FUN_180130288(lVar4,auStack_58,iVar9,iVar8);
              (*(code *)puVar2)(0x180224000);
              (*extraout_x11_01)(lVar4,auStack_58);
              goto LAB_1801e5fd4;
            }
          }
        }
        *(uint *)(lVar4 + 0x48) = *(uint *)(lVar4 + 0x48) & 0xfffffffe;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(ushort *)(param_1 + 0x3c));
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

