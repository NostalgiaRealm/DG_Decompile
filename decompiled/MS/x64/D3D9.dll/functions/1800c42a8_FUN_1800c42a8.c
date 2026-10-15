/*
 * FUN_1800c42a8 at 1800c42a8
 * undefined8 * __fastcall FUN_1800c42a8(longlong param_1, uint param_2)
 * Address ranges: 1800c42a8-1800c44dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800c42a8(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_318;
  uint local_288;
  int local_284;
  uint local_280;
  byte abStack_271 [509];
  byte abStack_74 [76];
  
  uVar11 = 0;
  bVar9 = 0;
  bVar4 = FUN_18008879c(param_2,'\x01',&local_288);
  if (bVar4 != 0) {
    if ((local_284 == 0) || (local_284 == 3)) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    if (local_280 != 0) {
      lVar1 = *(longlong *)(&DAT_00006898 + *(longlong *)(param_1 + 0x10));
      do {
        bVar4 = abStack_74[uVar11];
        uVar5 = 0;
        *(undefined2 *)(&local_318 + uVar11) = 0;
        *(undefined1 *)((longlong)&local_318 + uVar11 * 8 + 5) = 0;
        bVar6 = abStack_271[(ulonglong)bVar4 * 8 + 1];
        if (bVar6 != 0) {
          if (bVar6 == 1) {
            uVar5 = 1;
          }
          else if (bVar6 == 2) {
            uVar5 = 2;
          }
          else if (bVar6 == 3) {
            uVar5 = 3;
          }
          else if (bVar6 == 4) {
            uVar5 = 4;
          }
          else if (bVar6 == 5) {
            uVar5 = 5;
          }
          else {
            uVar5 = 0x11;
          }
        }
        *(undefined1 *)((longlong)&local_318 + uVar11 * 8 + 4) = uVar5;
        *(ushort *)((longlong)&local_318 + uVar11 * 8 + 2) =
             (ushort)abStack_271[(ulonglong)bVar4 * 8] << 2;
        if (bVar4 < 9) {
          if (bVar4 == 8) {
LAB_1800c43a8:
            bVar6 = 5;
          }
          else if (bVar4 == 0) {
LAB_1800c4428:
            bVar6 = -cVar3 & 9;
          }
          else if (bVar4 == 1) {
            bVar6 = 1;
          }
          else if (bVar4 == 2) {
            bVar6 = 2;
          }
          else {
            if (bVar4 == 3) goto LAB_1800c4424;
            if (bVar4 == 4) {
              bVar6 = 4;
            }
            else {
              if ((bVar4 != 5) && (bVar4 != 6)) {
                if (bVar4 != 7) goto LAB_1800c4420;
                goto LAB_1800c43a8;
              }
              bVar6 = 10;
            }
          }
        }
        else {
          if (((((bVar4 == 9) || (bVar4 == 10)) || (bVar4 == 0xb)) ||
              ((bVar4 == 0xc || (bVar4 == 0xd)))) || (bVar4 == 0xe)) goto LAB_1800c43a8;
          if (bVar4 == 0xf) goto LAB_1800c4428;
          if (bVar4 == 0x10) {
LAB_1800c4424:
            bVar6 = 3;
          }
          else {
LAB_1800c4420:
            bVar6 = 0;
          }
        }
        *(byte *)((longlong)&local_318 + uVar11 * 8 + 6) = bVar6;
        if (bVar4 < 9) {
          if (bVar4 == 8) {
LAB_1800c445c:
            cVar8 = bVar4 - 7;
          }
          else {
            if ((((bVar4 != 0) && (bVar4 != 1)) && (bVar4 != 2)) &&
               (((bVar4 != 3 && (bVar4 != 4)) && (bVar4 != 5)))) {
              if (bVar4 == 6) goto LAB_1800c4458;
              if (bVar4 == 7) goto LAB_1800c445c;
            }
LAB_1800c43e2:
            cVar8 = '\0';
          }
        }
        else {
          if ((((bVar4 == 9) || (bVar4 == 10)) || (bVar4 == 0xb)) ||
             (((bVar4 == 0xc || (bVar4 == 0xd)) || (bVar4 == 0xe)))) goto LAB_1800c445c;
          if ((bVar4 != 0xf) && (bVar4 != 0x10)) goto LAB_1800c43e2;
LAB_1800c4458:
          cVar8 = '\x01';
        }
        *(char *)((longlong)&local_318 + uVar11 * 8 + 7) = cVar8;
        if ((*(char *)((longlong)&local_318 + uVar11 * 8 + 4) == '\x05') &&
           ((*(byte *)(lVar1 + 0xec) & 1) == 0)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        bVar9 = bVar9 | bVar4;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < local_280);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(&local_318 + uVar11) = 0xff;
  *(undefined4 *)((longlong)&local_318 + uVar11 * 8 + 4) = 0x11;
  puVar7 = FUN_1800ad104(uVar2,(undefined8 *)&local_288,param_2,bVar9,1);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1800c2e68((longlong)puVar7,&local_318,(int)uVar11 + 1);
    LOCK();
    *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) + 1;
    UNLOCK();
  }
  return puVar7;
}

