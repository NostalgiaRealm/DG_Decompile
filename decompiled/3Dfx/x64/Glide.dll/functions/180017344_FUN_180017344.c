/*
 * FUN_180017344 at 180017344
 * undefined __fastcall FUN_180017344(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, char param_7)
 * Address ranges: 180017344-1800175ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017344(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  char param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int local_res20;
  uint local_c8 [36];
  
  if (param_4 < 9) {
    if (((((byte)(&DAT_180062c08)[(int)param_4] < 9) && (param_3 < 9)) &&
        ((byte)(&DAT_180062c08)[(int)param_3] < 9)) && ((param_6 < 0x10 && (param_5 < 7)))) {
      lVar9 = (longlong)param_2 * 0x41 + *(longlong *)(param_1 + 0x18);
      local_res20 = -1;
      iVar8 = 0;
      FUN_18005f814((undefined1 *)local_c8,0,0x90);
      uVar11 = 8 - (byte)(&DAT_180062c08)[(int)param_4];
      for (uVar10 = (uint)(byte)(&DAT_180062c08)[(int)param_4];
          (int)(uint)(byte)(&DAT_180062c08)[(int)param_3] <= (int)uVar10; uVar10 = uVar10 - 1) {
        if (*(char *)(lVar9 + 0x1a1) == '\0') {
LAB_18001749a:
          lVar4 = 0;
        }
        else {
          iVar6 = *(int *)(&DAT_180060888 + (longlong)(int)uVar10 * 4);
          if (iVar6 == 1) {
            lVar4 = 1;
          }
          else if (iVar6 == 2) {
            lVar4 = 2;
          }
          else {
            if (((iVar6 != 3) && (iVar6 != 4)) &&
               ((iVar6 != 5 && (((iVar6 != 6 && (iVar6 != 7)) && (iVar6 != 8))))))
            goto LAB_18001749a;
            lVar4 = 3;
          }
        }
        iVar6 = *(int *)(lVar9 + 0x180 + lVar4 * 4);
        lVar4 = (ulonglong)uVar11 * 2;
        uVar2 = *(int *)((longlong)param_2 * 0x4e8 + 0x2b8 + *(longlong *)(param_1 + 0x18)) + iVar6;
        if (iVar6 == local_res20) {
          uVar2 = uVar2 + iVar8;
        }
        else {
          iVar8 = 0;
          local_res20 = iVar6;
        }
        local_c8[(ulonglong)uVar11 * 4] = uVar2;
        uVar2 = *(uint *)(&DAT_180060888 + (longlong)(int)uVar10 * 4);
        uVar3 = FUN_180017d28(uVar2,param_5);
        cVar1 = *(char *)(lVar9 + 0x1a0);
        local_c8[lVar4 * 2 + 1] = uVar3 >> 0x10;
        uVar7 = (uVar3 >> 0x10) * (uint)(byte)(&DAT_180062bb8)[(int)param_6];
        local_c8[lVar4 * 2 + 2] = uVar3 & 0xffff;
        local_c8[lVar4 * 2 + 3] = uVar7;
        if (cVar1 == '\x03') {
LAB_180017551:
          iVar6 = (uVar3 & 0xffff) * uVar7;
        }
        else {
          bVar5 = 0xff;
          if (uVar2 < 9) {
            bVar5 = (&DAT_180062c08)[(int)uVar2];
          }
          if ((bool)(bVar5 & 1) == (cVar1 != '\x01')) goto LAB_180017551;
          iVar6 = 0;
        }
        iVar8 = iVar8 + iVar6;
        uVar11 = uVar11 + 1;
      }
      if (param_7 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 600))
                  (*(longlong **)(param_1 + 0x18),param_2,param_6,
                   8 - (uint)(byte)(&DAT_180062c08)[(int)param_4],
                   8 - (uint)(byte)(&DAT_180062c08)[(int)param_3],local_c8,
                   *(undefined1 *)(lVar9 + 0x1a0));
      }
    }
  }
  return;
}

