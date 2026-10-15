/*
 * FUN_1003cee0 at 1003cee0
 * undefined __thiscall FUN_1003cee0(void * this, uint param_1, char param_2)
 * Address ranges: 1003cee0-1003d005
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003cee0(void *this,uint param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  
  uVar12 = (int)param_1 >> 0x1f;
  uVar8 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar12);
  if (((uVar8 == *(uint *)((int)this + 0xf8f8)) ||
      (iVar3 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar3 + uVar8 * 0x18) != param_1)) ||
     (*(uint *)(iVar3 + 4 + uVar8 * 0x18) != uVar12)) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)(uVar8 * 0x18 + 0xc + iVar3);
  }
  cVar11 = pcVar10[2];
  cVar7 = param_2 + '\x01';
  if (cVar11 == cVar7) {
    pcVar10[2] = '\0';
    cVar11 = '\0';
  }
  else if (pcVar10[3] == cVar7) {
    pcVar10[3] = '\0';
  }
  else if (pcVar10[4] == cVar7) {
    pcVar10[4] = '\0';
  }
  else if (pcVar10[5] == cVar7) {
    pcVar10[5] = '\0';
  }
  pcVar10[7] = '\x01';
  if (*pcVar10 == '\0' && cVar11 == '\0') {
    if (pcVar10[6] == '\0') {
      if (pcVar10[3] != '\0') {
        return;
      }
      if (pcVar10[4] != '\0') {
        return;
      }
      cVar11 = pcVar10[5];
    }
    else {
      cVar11 = pcVar10[3];
    }
    if ((cVar11 == '\0') && (pcVar10[1] == '\0')) {
      uVar9 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar12);
      uVar8 = *(uint *)((int)this + 0xf8f8);
      if ((uVar9 != uVar8) &&
         ((*(uint *)(*(int *)((int)this + 0xf8f4) + uVar9 * 0x18) == param_1 &&
          (*(uint *)(*(int *)((int)this + 0xf8f4) + 4 + uVar9 * 0x18) == uVar12)))) {
        uVar12 = uVar9 + 1;
        if (uVar9 + 1 < uVar8) {
          do {
            iVar3 = *(int *)((int)this + 0xf8f4);
            uVar9 = uVar12 + 1;
            puVar1 = (undefined4 *)(iVar3 + uVar12 * 0x18);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (undefined4 *)(iVar3 + -0x18 + uVar12 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            *(undefined8 *)(iVar3 + -8 + uVar12 * 0x18) =
                 *(undefined8 *)(iVar3 + 0x10 + uVar12 * 0x18);
            uVar8 = *(uint *)((int)this + 0xf8f8);
            uVar12 = uVar9;
          } while (uVar9 < uVar8);
        }
        *(uint *)((int)this + 0xf8f8) = uVar8 - 1;
      }
    }
  }
  return;
}

