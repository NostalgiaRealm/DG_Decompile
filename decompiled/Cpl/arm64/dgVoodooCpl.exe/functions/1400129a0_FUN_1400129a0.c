/*
 * FUN_1400129a0 at 1400129a0
 * undefined4 __cdecl FUN_1400129a0(longlong param_1)
 * Address ranges: 1400129a0-140012bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1400129a0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined4 local_1a0;
  undefined1 auStack_188 [256];
  undefined4 local_88;
  undefined4 uStack_84;
  
  FUN_140013478(param_1);
  local_1a0 = 0;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    local_1a0 = 0;
    do {
      uVar9 = (uint)uVar10;
      lVar12 = *(longlong *)(param_1 + 0x480);
      uVar10 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar10 * 4);
      lVar1 = lVar12 + uVar10 * 0x28;
      if (*(char *)(lVar1 + 0x1c) != '\0') {
        cVar3 = *(char *)(param_1 + 0x498);
        iVar5 = *(int *)(lVar1 + 0x18);
        uVar13 = *(undefined8 *)(param_1 + 0x490);
        iVar6 = *(int *)(param_1 + 0x488);
        uVar2 = *(undefined4 *)(param_1 + 0x48c);
        *(int *)(lVar1 + 0x18) = iVar5 + 1;
        if (iVar5 == 0) {
          if (iVar6 == 5) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar1 + 8);
          }
          *(undefined4 *)(lVar1 + 0x350) = 0;
          pcVar14 = *(code **)(lVar12 + 0x2d0);
          iVar5 = (*pcVar14)(plVar11,iVar6,0,0,uVar13,uVar2,7,lVar1 + 0x330,lVar1 + 0x34c,
                             lVar1 + 0x338);
          if (iVar5 < 0) {
            if ((cVar3 == '\0') ||
               (iVar6 = (*pcVar14)(0,5,0,0,uVar13,uVar2,7,lVar1 + 0x330,lVar1 + 0x34c,lVar1 + 0x338)
               , iVar6 < 0)) {
              *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
            }
            else {
              (**(code **)**(undefined8 **)(lVar1 + 0x330))
                        (*(undefined8 **)(lVar1 + 0x330),&DAT_140028f60,lVar1 + 0x340);
              *(undefined4 *)(lVar12 + uVar10 * 0x28 + 0x348) = 5;
            }
          }
          else {
            (**(code **)**(undefined8 **)(lVar1 + 0x330))
                      (*(undefined8 **)(lVar1 + 0x330),&DAT_140028f60,lVar1 + 0x340);
            *(int *)(lVar12 + uVar10 * 0x28 + 0x348) = iVar6;
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x40))(plVar11,auStack_188);
              *(undefined4 *)(lVar1 + 0x350) = local_88;
              *(undefined4 *)(lVar1 + 0x354) = uStack_84;
            }
          }
        }
      }
      if (*(int *)(lVar1 + 0x18) == 0) {
        uVar8 = *(uint *)(param_1 + 0x328);
        uVar4 = uVar9;
        if (uVar9 < uVar8) {
          while (uVar7 = uVar4 + 1, uVar7 < uVar8) {
            *(undefined4 *)(*(longlong *)(param_1 + 800) + (ulonglong)uVar4 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 800) + (ulonglong)uVar7 * 4);
            uVar4 = uVar7;
            uVar8 = *(uint *)(param_1 + 0x328);
          }
          *(uint *)(param_1 + 0x328) = uVar8 - 1;
        }
        uVar9 = uVar9 - 1;
      }
      else {
        local_1a0 = 1;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < *(uint *)(param_1 + 0x328));
  }
  return local_1a0;
}

