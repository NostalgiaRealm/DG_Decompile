/*
 * FUN_1801c3990 at 1801c3990
 * undefined FUN_1801c3990(void)
 * Address ranges: 1801c3990-1801c3cff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801c3990(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(char *)(param_1 + 0xc509) == '\0') && (param_2 == *(uint *)(param_1 + 0xc500))) {
    return (ulonglong)*(byte *)(param_1 + 0xc504);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar5 = *plVar1;
  uVar4 = 1;
  uVar2 = *(uint *)(*(longlong *)(lVar5 + 8) + 0x100) & 1;
  if ((param_2 & 1) != 0) {
    uVar7 = 1;
    do {
      if (3 < uVar7) break;
      lVar9 = plVar1[uVar7];
      if (lVar9 != 0) {
        if ((((*(int *)(lVar9 + 0x60) != *(int *)(lVar5 + 0x60)) ||
             (*(int *)(lVar9 + 100) != *(int *)(lVar5 + 100))) ||
            (*(int *)(lVar9 + 0x58) != *(int *)(lVar5 + 0x58))) ||
           (*(int *)(lVar9 + 0x5c) != *(int *)(lVar5 + 0x5c))) {
          uVar4 = 0;
        }
        if ((*(uint *)(*(longlong *)(lVar9 + 8) + 0x100) & 1) != uVar2) {
          uVar4 = 0;
          break;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar4 != 0);
  }
  if (param_2 == 3) {
    if ((int)uVar4 == 0) goto LAB_1801c3c74;
    lVar9 = *(longlong *)(param_1 + 0x50);
    if (lVar9 != 0) {
      uVar7 = *(uint *)(lVar5 + 0x60);
      if ((*(uint *)(lVar9 + 0x60) < uVar7) ||
         (uVar3 = *(uint *)(lVar5 + 100), *(uint *)(lVar9 + 100) < uVar3)) {
        uVar4 = 0;
      }
      else if (((uVar7 < (uint)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58))) ||
               (uVar3 < (uint)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c)))) &&
              (uVar7 < 3 && uVar3 < 3)) {
        param_2 = 2;
      }
      if ((*(uint *)(*(longlong *)(lVar9 + 8) + 0x100) & 1) != uVar2) {
        uVar4 = 0;
        goto LAB_1801c3c74;
      }
      goto LAB_1801c3b04;
    }
LAB_1801c3b6c:
    uVar4 = FUN_18011c748(param_1,plVar1,*(undefined8 *)(param_1 + 0x50),0);
    *(longlong *)(param_1 + 0xc460) = *plVar1;
    *(undefined8 *)(param_1 + 0xc468) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0xc470) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0xc478) = *(undefined8 *)(param_1 + 0x48);
    lVar5 = *(longlong *)(param_1 + 0x50);
    *(longlong *)(param_1 + 0xc480) = lVar5;
    if (((lVar5 != 0) && (*(int *)(*(longlong *)(lVar5 + 8) + 0x88) != -1)) &&
       (*(longlong *)(lVar5 + 200) != 0)) {
      *(undefined1 *)(*(longlong *)(lVar5 + 200) + 0x3e) = 1;
    }
    if (((*(longlong *)(*(longlong *)(param_1 + 0xc460) + 200) != 0) ||
        ((*(longlong *)(param_1 + 0xc468) != 0 &&
         (*(longlong *)(*(longlong *)(param_1 + 0xc468) + 200) != 0)))) ||
       (((*(longlong *)(param_1 + 0xc470) != 0 &&
         (*(longlong *)(*(longlong *)(param_1 + 0xc470) + 200) != 0)) ||
        ((*(longlong *)(param_1 + 0xc478) != 0 &&
         (*(longlong *)(*(longlong *)(param_1 + 0xc478) + 200) != 0)))))) goto LAB_1801c3c64;
    if (*(longlong *)(param_1 + 0xc480) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xc480) + 200);
joined_r0x0001801c3c60:
      if (lVar5 != 0) goto LAB_1801c3c64;
    }
LAB_1801c3cf8:
    bVar6 = 0;
  }
  else {
LAB_1801c3b04:
    if ((int)uVar4 == 0) goto LAB_1801c3c74;
    if (param_2 != 1) {
      if ((param_2 != 2) ||
         ((((lVar9 = *(longlong *)(param_1 + 0x50),
            (uint)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58)) <= *(uint *)(lVar5 + 0x60)
            && ((uint)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c)) <= *(uint *)(lVar5 + 100)
               )) && (*(int *)(lVar9 + 0x58) == *(int *)(lVar5 + 0x58))) &&
          (*(int *)(lVar9 + 0x5c) == *(int *)(lVar5 + 0x5c))))) goto LAB_1801c3b6c;
      uVar4 = FUN_18011c748(param_1,plVar1,lVar9,1);
      *(undefined8 *)(param_1 + 0xc460) = 0;
      *(undefined8 *)(param_1 + 0xc468) = 0;
      *(undefined8 *)(param_1 + 0xc470) = 0;
      *(undefined8 *)(param_1 + 0xc478) = 0;
      lVar5 = *(longlong *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0xc480) = lVar5;
      if ((*(int *)(*(longlong *)(lVar5 + 8) + 0x88) != -1) && (*(longlong *)(lVar5 + 200) != 0)) {
        *(undefined1 *)(*(longlong *)(lVar5 + 200) + 0x3e) = 1;
      }
      if (*(longlong *)(param_1 + 0xc480) == 0) goto LAB_1801c3cf8;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xc480) + 200);
      goto joined_r0x0001801c3c60;
    }
    uVar4 = FUN_18011c748(param_1,plVar1,0,0);
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar9 = *(longlong *)(param_1 + 0x40);
    lVar8 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0xc460) = *plVar1;
    *(longlong *)(param_1 + 0xc468) = lVar5;
    *(longlong *)(param_1 + 0xc470) = lVar9;
    *(longlong *)(param_1 + 0xc478) = lVar8;
    *(undefined8 *)(param_1 + 0xc480) = 0;
    if (((*(longlong *)(*plVar1 + 200) == 0) && ((lVar5 == 0 || (*(longlong *)(lVar5 + 200) == 0))))
       && ((lVar9 == 0 || (*(longlong *)(lVar9 + 200) == 0)))) {
      if (lVar8 != 0) {
        lVar5 = *(longlong *)(lVar8 + 200);
        goto joined_r0x0001801c3c60;
      }
      goto LAB_1801c3cf8;
    }
LAB_1801c3c64:
    bVar6 = 1;
  }
  *(byte *)(param_1 + 0xd10) = *(byte *)(param_1 + 0xd10) | bVar6;
LAB_1801c3c74:
  *(char *)(param_1 + 0xc504) = (char)uVar4;
  *(uint *)(param_1 + 0xc500) = param_2;
  *(undefined1 *)(param_1 + 0xc509) = 0;
  return uVar4;
}

