/*
 * FUN_1800a08bc at 1800a08bc
 * undefined __fastcall FUN_1800a08bc(longlong * param_1, byte * param_2)
 * Address ranges: 1800a08bc-1800a0aa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a08bc(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint yBottom;
  uint xRight;
  undefined8 uVar4;
  int iVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  tagRECT local_38;
  
  iVar5 = FUN_1800fbe7c(param_2,(byte *)param_1[2],0x400);
  if (iVar5 != 0) {
    if ((*(int *)((longlong)param_1 + 0x2c) == 0) && (*(char *)((longlong)param_1 + 0x24d) != '\0'))
    {
      if ((param_1[0x37] == 0) || (param_1[0x41] == 0)) {
        FUN_18009ff3c((longlong)param_1);
      }
      uVar9 = 0;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        do {
          uVar11 = 0;
          if ((int)param_1[6] != 0) {
            do {
              uVar10 = uVar9 * *(int *)((longlong)param_1 + 0x3c) + uVar11;
              BVar6 = IsRectEmpty((RECT *)(((ulonglong)uVar10 << 5 | 0x10) +
                                          *(longlong *)((longlong)param_1 + 0x84)));
              if (BVar6 == 0) {
                FUN_1800a0e68(param_1,uVar11,uVar9);
                SetRectEmpty((LPRECT)(((ulonglong)uVar10 << 5 | 0x10) +
                                     *(longlong *)((longlong)param_1 + 0x84)));
                bVar1 = (byte)uVar11 & 0x1f;
                bVar2 = (byte)uVar11 & 0x1f;
                yBottom = *(uint *)(param_1 + 5) >> bVar1;
                if (*(uint *)(param_1 + 5) >> bVar1 == 0) {
                  yBottom = 1;
                }
                xRight = *(uint *)((longlong)param_1 + 0x24) >> bVar2;
                if (*(uint *)((longlong)param_1 + 0x24) >> bVar2 == 0) {
                  xRight = 1;
                }
                SetRect(&local_38,0,0,xRight,yBottom);
                FUN_1800a1a1c((longlong)param_1,uVar10,&local_38);
              }
              uVar11 = uVar11 + 1;
              pbVar3 = (byte *)((longlong)param_1 +
                               ((longlong)(ulonglong)(uVar10 & 0x3f) >> 3) +
                               (ulonglong)(uVar10 >> 6) * 8 + 0x270);
              *pbVar3 = *pbVar3 | '\x01' << ((ulonglong)(uVar10 & 0x3f) & 7);
            } while (uVar11 < *(uint *)(param_1 + 6));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)((longlong)param_1 + 0x34));
      }
    }
    puVar8 = (undefined8 *)param_1[2];
    if (param_2 == (byte *)0x0) {
      FUN_1800fbea0((undefined1 *)puVar8,0,0x400);
    }
    else {
      lVar7 = 8;
      do {
        uVar4 = *(undefined8 *)(param_2 + 8);
        *puVar8 = *(undefined8 *)param_2;
        puVar8[1] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        puVar8[2] = *(undefined8 *)(param_2 + 0x10);
        puVar8[3] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x28);
        puVar8[4] = *(undefined8 *)(param_2 + 0x20);
        puVar8[5] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        puVar8[6] = *(undefined8 *)(param_2 + 0x30);
        puVar8[7] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x48);
        puVar8[8] = *(undefined8 *)(param_2 + 0x40);
        puVar8[9] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x58);
        puVar8[10] = *(undefined8 *)(param_2 + 0x50);
        puVar8[0xb] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x68);
        puVar8[0xc] = *(undefined8 *)(param_2 + 0x60);
        puVar8[0xd] = uVar4;
        pbVar3 = param_2 + 0x70;
        uVar4 = *(undefined8 *)(param_2 + 0x78);
        param_2 = param_2 + 0x80;
        puVar8[0xe] = *(undefined8 *)pbVar3;
        puVar8[0xf] = uVar4;
        puVar8 = puVar8 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *(undefined1 *)((longlong)param_1 + 0x191) = 1;
    FUN_18009dcd0((longlong)param_1,'\0','\0');
  }
  return;
}

