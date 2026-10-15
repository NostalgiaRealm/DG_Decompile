/*
 * FUN_1003d0c0 at 1003d0c0
 * undefined __thiscall FUN_1003d0c0(void * this, uint param_1, char param_2)
 * Address ranges: 1003d0c0-1003d1c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d0c0(void *this,uint param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  
  uVar11 = (int)param_1 >> 0x1f;
  uVar7 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar11);
  if (((uVar7 == *(uint *)((int)this + 0xf8f8)) ||
      (iVar3 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar3 + uVar7 * 0x18) != param_1)) ||
     (*(uint *)(iVar3 + 4 + uVar7 * 0x18) != uVar11)) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = (char *)(uVar7 * 0x18 + 0xc + iVar3);
  }
  cVar10 = pcVar9[2];
  if (cVar10 == (char)(param_2 + '\x01')) {
    pcVar9[2] = '\0';
    cVar10 = '\0';
  }
  else if (pcVar9[3] == (char)(param_2 + '\x01')) {
    pcVar9[3] = '\0';
  }
  pcVar9[7] = '\x01';
  if (*pcVar9 == '\0' && cVar10 == '\0') {
    if (pcVar9[6] == '\0') {
      if (pcVar9[3] != '\0') {
        return;
      }
      if (pcVar9[4] != '\0') {
        return;
      }
      cVar10 = pcVar9[5];
    }
    else {
      cVar10 = pcVar9[3];
    }
    if ((cVar10 == '\0') && (pcVar9[1] == '\0')) {
      uVar8 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar11);
      uVar7 = *(uint *)((int)this + 0xf8f8);
      if ((uVar8 != uVar7) &&
         ((*(uint *)(*(int *)((int)this + 0xf8f4) + uVar8 * 0x18) == param_1 &&
          (*(uint *)(*(int *)((int)this + 0xf8f4) + 4 + uVar8 * 0x18) == uVar11)))) {
        uVar11 = uVar8 + 1;
        if (uVar8 + 1 < uVar7) {
          do {
            iVar3 = *(int *)((int)this + 0xf8f4);
            uVar8 = uVar11 + 1;
            puVar1 = (undefined4 *)(iVar3 + uVar11 * 0x18);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (undefined4 *)(iVar3 + -0x18 + uVar11 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            *(undefined8 *)(iVar3 + -8 + uVar11 * 0x18) =
                 *(undefined8 *)(iVar3 + 0x10 + uVar11 * 0x18);
            uVar7 = *(uint *)((int)this + 0xf8f8);
            uVar11 = uVar8;
          } while (uVar8 < uVar7);
        }
        *(uint *)((int)this + 0xf8f8) = uVar7 - 1;
      }
    }
  }
  return;
}

