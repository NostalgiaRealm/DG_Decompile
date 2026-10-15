/*
 * FUN_180093020 at 180093020
 * undefined __fastcall FUN_180093020(longlong param_1, byte * param_2)
 * Address ranges: 180093020-1800931a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180093020(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint xRight;
  int iVar5;
  BOOL BVar6;
  uint yBottom;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  tagRECT local_58;
  
  if ((*(byte **)(param_1 + -0xd0) != (byte *)0x0) &&
     (iVar5 = FUN_1800fbe7c(param_2,*(byte **)(param_1 + -0xd0),0x400), iVar5 != 0)) {
    if ((*(int *)(param_1 + -0xb4) == 0) && (*(char *)(param_1 + 0x169) != '\0')) {
      plVar1 = (longlong *)(param_1 + -0xe0);
      if ((*(longlong *)(param_1 + 0xb8) == 0) || (*(longlong *)(param_1 + 0xf8) == 0)) {
        FUN_180091434((longlong)plVar1);
      }
      uVar8 = 0;
      if (*(int *)(param_1 + -0xac) != 0) {
        do {
          uVar7 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              uVar9 = uVar8 * *(int *)(param_1 + -0xa4) + uVar7;
              BVar6 = IsRectEmpty((RECT *)(*(longlong *)(param_1 + -0x50) + 0x18 +
                                          (ulonglong)uVar9 * 0x28));
              if (BVar6 == 0) {
                FUN_180091eb8(plVar1,uVar7,uVar8);
                SetRectEmpty((LPRECT)(*(longlong *)(param_1 + -0x50) + 0x18 +
                                     (ulonglong)uVar9 * 0x28));
                bVar2 = (byte)uVar7 & 0x1f;
                bVar3 = (byte)uVar7 & 0x1f;
                yBottom = *(uint *)(param_1 + -0xb8) >> bVar2;
                if (*(uint *)(param_1 + -0xb8) >> bVar2 == 0) {
                  yBottom = 1;
                }
                xRight = *(uint *)(param_1 + -0xbc) >> bVar3;
                if (*(uint *)(param_1 + -0xbc) >> bVar3 == 0) {
                  xRight = 1;
                }
                SetRect(&local_58,0,0,xRight,yBottom);
                FUN_1800929e8((longlong)plVar1,uVar9,&local_58);
              }
              uVar7 = uVar7 + 1;
              pbVar4 = (byte *)(param_1 + 400 + (ulonglong)(uVar9 >> 6) * 8 +
                               ((longlong)(ulonglong)(uVar9 & 0x3f) >> 3));
              *pbVar4 = *pbVar4 | '\x01' << ((ulonglong)(uVar9 & 0x3f) & 7);
            } while (uVar7 < *(uint *)(param_1 + -0xb0));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + -0xac));
      }
    }
    FUN_1800907ec(param_1,(undefined8 *)param_2);
  }
  return;
}

