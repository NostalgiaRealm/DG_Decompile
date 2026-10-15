/*
 * FUN_180031d4c at 180031d4c
 * undefined8 __fastcall FUN_180031d4c(longlong * param_1, char param_2)
 * Address ranges: 180031d4c-180031f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180031d4c(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  uint local_48 [3];
  int local_3c;
  ulonglong uVar5;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar5 = 0;
  if (param_1[6] == 0) {
    FUN_180031c40((longlong)param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if (*(char *)((longlong)param_1 + 0x27) == '\0') {
      if (param_2 == '\0') {
        local_48[2] = (uint)*(ushort *)(param_1 + 2);
        local_48[0] = 0;
        local_48[1] = 0;
        if ((int)param_1[4] != 0) {
          bVar8 = *(byte *)((longlong)param_1 + 0x24);
          local_48[2] = (-(uint)bVar8 & (*(ushort *)(param_1 + 2) - 1) + (uint)bVar8) / (uint)bVar8;
        }
        local_3c = *(ushort *)((longlong)param_1 + 0x16) - 1;
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      else {
        lVar1 = param_1[5];
        cVar2 = (**(code **)(*param_1 + 0x50))(param_1);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x28))
                    (param_1,lVar1,0,(short)param_1[2],*(undefined2 *)((longlong)param_1 + 0x12),
                     (int)param_1[3],0);
          (**(code **)(*param_1 + 0x58))(param_1);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x18))();
    uVar7 = uVar5;
    uVar10 = uVar5;
    bVar8 = 0x80;
    if ((int)param_1[8] == 0) goto LAB_180031f0c;
    do {
      uVar6 = (uint)uVar7;
      uVar4 = (uint)uVar5;
      if ((*(byte *)(uVar10 + param_1[6]) & bVar8) == 0) {
        if (uVar6 != uVar4) {
          FUN_180032024((longlong)param_1,local_48,uVar6,uVar4);
          (**(code **)(*param_1 + 0x38))(param_1,local_48);
          FUN_180031b98((longlong)param_1,uVar6,uVar4);
          uVar6 = uVar4;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
      }
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)uVar4;
      *(byte *)(param_1[6] + uVar10) = *(byte *)(param_1[6] + uVar10) & ~bVar8;
      if (bVar8 < 2) {
        bVar9 = 0x80;
      }
      else {
        bVar9 = bVar8 >> 1;
      }
      uVar3 = (ulonglong)((int)uVar10 + 1);
      if (1 < bVar8) {
        uVar3 = uVar10;
      }
      uVar10 = uVar3;
      bVar8 = bVar9;
    } while ((uint)uVar3 < *(uint *)(param_1 + 8));
    uVar6 = (uint)uVar7;
    if (uVar6 == uVar4) goto LAB_180031f0c;
    FUN_180032024((longlong)param_1,local_48,uVar6,uVar4);
    (**(code **)(*param_1 + 0x38))(param_1,local_48);
  }
  uVar3 = FUN_180031b98((longlong)param_1,uVar6,uVar4);
LAB_180031f0c:
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  return CONCAT71((int7)(uVar3 >> 8),1);
}

