/*
 * FUN_180023778 at 180023778
 * uint __cdecl FUN_180023778(longlong * param_1, uint param_2, int param_3, uint param_4, int param_5, char param_6, longlong param_7, byte param_8)
 * Address ranges: 180023778-1800239cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180023778(longlong *param_1,uint param_2,int param_3,uint param_4,int param_5,char param_6,
                  longlong param_7,byte param_8)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = 0;
  if ((param_4 == 0xff || param_2 == 0) || (iVar4 = FUN_180021d48(param_4,param_3 == 2), iVar4 != 0)
     ) {
    uVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
    uVar7 = FUN_180022ca0(uVar6,param_3);
    uVar5 = 0;
    if ((int)uVar7 != -1) {
      lVar8 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))
                        ((longlong *)param_1[0x630],uVar7 & 0xffffffff);
      if ((param_3 == *(int *)((longlong)param_1 + 0x2984)) || (*(char *)(lVar8 + 0x48) != '\0')) {
        (**(code **)(*param_1 + 0x2a0))(param_1);
      }
      lVar8 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))
                        ((longlong *)param_1[0x630],uVar7 & 0xffffffff);
      if (((param_2 >> 4 & 1) == 0) && (*(char *)(param_1[1] + 0x53) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((*(longlong *)(lVar8 + 0x60) == 0) || ((param_8 & 1) != 0)) || (!bVar3)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      uVar1 = param_2 & 1;
      if (((uVar1 != 0) || (uVar9 = *(uint *)(lVar8 + 0x10), *(int *)(lVar8 + 0x78) == 0)) &&
         (uVar9 = param_4, param_4 == 0xff)) {
        uVar9 = *(uint *)(lVar8 + 0x10);
      }
      if ((*(int *)(lVar8 + 0x74) == 0) && (*(int *)(lVar8 + 0x78) == 0)) {
        uVar5 = FUN_180022920((longlong *)param_1[0x630],(int)uVar7,uVar9,param_5,param_6,uVar10,
                              param_8,(byte)uVar1 ^ 1,0,0,0);
        uVar5 = uVar5 & 0xff;
      }
      else {
        uVar5 = 1;
        if ((uVar1 != 0) &&
           (((uVar9 != *(uint *)(lVar8 + 0x6c) || (param_6 != *(char *)(lVar8 + 0x95))) ||
            ((param_5 != *(int *)(lVar8 + 0x70) && (param_5 != 0xff)))))) {
          uVar5 = 0;
        }
        uVar10 = (uint)*(byte *)(lVar8 + 0x99);
      }
      if (uVar5 != 0) {
        *(undefined4 *)(param_7 + 0x14) = *(undefined4 *)(lVar8 + 0x6c);
        *(undefined4 *)(param_7 + 0x18) = *(undefined4 *)(lVar8 + 0x70);
        lVar2 = 0x80;
        if (uVar10 != 0) {
          lVar2 = 0x60;
        }
        *(undefined8 *)(param_7 + 8) = *(undefined8 *)(lVar8 + lVar2);
        if (uVar10 == 0) {
          iVar4 = *(int *)(lVar8 + 0x88);
        }
        else {
          iVar4 = *(int *)(lVar8 + 0x68) << 2;
          if (*(char *)(lVar8 + 0x94) == '\0') {
            iVar4 = *(int *)(lVar8 + 0x68) << 1;
          }
        }
        lVar2 = lVar8 + (ulonglong)uVar1 * 4;
        *(int *)(param_7 + 0x10) = iVar4;
        *(char *)(lVar8 + 0x99) = (char)uVar10;
        *(int *)(lVar2 + 0x74) = *(int *)(lVar2 + 0x74) + 1;
        FUN_180029c60(lVar8,(ulonglong)*(uint *)(lVar8 + 0x24));
      }
    }
    (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  return uVar5;
}

