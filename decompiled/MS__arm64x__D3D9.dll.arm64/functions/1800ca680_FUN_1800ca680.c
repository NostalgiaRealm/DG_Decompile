/*
 * FUN_1800ca680 at 1800ca680
 * undefined FUN_1800ca680(void)
 * Address ranges: 1800ca680-1800ca863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ca680(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 local_80;
  undefined4 local_78;
  int iStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  uVar7 = 0;
  if (*(short *)(param_1 + 0x3c) != 0) {
    do {
      plVar3 = *(longlong **)(param_1 + 0x40 + uVar7 * 8);
      if ((*(uint *)(plVar3 + 9) & 1) != 0) {
        if (plVar3[6] == 0) {
          FUN_180023780(plVar3);
          (**(code **)(*plVar3 + 0x18))(plVar3);
          if (*(char *)((longlong)plVar3 + 0x27) == '\0') {
            local_80 = 0;
            local_78 = func_0x00018012faf0(plVar3);
            iStack_74 = *(ushort *)((longlong)plVar3 + 0x16) - 1;
            (**(code **)(*plVar3 + 0x38))(plVar3,&local_80);
          }
          else {
            (**(code **)(*plVar3 + 0x48))();
          }
          iVar5 = 0;
          iVar6 = 0;
LAB_1800ca820:
          FUN_1800236b0(plVar3,iVar6,iVar5);
        }
        else {
          (**(code **)(*plVar3 + 0x18))();
          uVar8 = 0x80;
          iVar6 = 0;
          iVar5 = 0;
          uVar4 = 0;
          if ((int)plVar3[8] != 0) {
            do {
              if ((*(byte *)(plVar3[6] + uVar4) & uVar8) == 0) {
                if (iVar6 != iVar5) {
                  FUN_180023a20(plVar3,auStack_70,iVar6,iVar5);
                  (**(code **)(*plVar3 + 0x38))(plVar3,auStack_70);
                  FUN_1800236b0(plVar3,iVar6,iVar5);
                  iVar6 = iVar5;
                }
                iVar6 = iVar6 + 1;
              }
              iVar5 = iVar5 + 1;
              *(byte *)(plVar3[6] + uVar4) = *(byte *)(plVar3[6] + uVar4) & ~(byte)uVar8;
              bVar2 = uVar8 < 2;
              uVar1 = (uint)uVar4;
              if (bVar2) {
                uVar1 = (uint)uVar4 + 1;
              }
              uVar4 = (ulonglong)uVar1;
              uVar8 = uVar8 >> 1;
              if (bVar2) {
                uVar8 = 0x80;
              }
            } while (uVar1 < *(uint *)(plVar3 + 8));
            if (iVar6 != iVar5) {
              FUN_180023a20(plVar3,auStack_60,iVar6,iVar5);
              (**(code **)(*plVar3 + 0x38))(plVar3,auStack_60);
              goto LAB_1800ca820;
            }
          }
        }
        *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) & 0xfffffffe;
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
    } while (uVar8 < *(ushort *)(param_1 + 0x3c));
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

