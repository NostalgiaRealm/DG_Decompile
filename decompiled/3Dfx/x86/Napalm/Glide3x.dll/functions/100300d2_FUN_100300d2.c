/*
 * FUN_100300d2 at 100300d2
 * char __fastcall FUN_100300d2(int param_1)
 * Address ranges: 100300d2-100303df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_100300d2(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  bool local_5;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  cVar1 = FUN_10030024(param_1);
  if (cVar1 == '\0') {
    return '\0';
  }
  local_5 = *(bool *)(param_1 + 0x2c);
  if (local_5 != false) goto LAB_10030242;
  cVar1 = **(char **)(param_1 + 0x24);
  if ((cVar1 != '\r') && (cVar1 != '\n')) {
    local_5 = false;
    pcVar2 = (char *)FUN_1002feb2(param_1);
    *(char **)(param_1 + 0x24) = pcVar2;
    if (cVar1 == '\"') {
      bVar6 = false;
      cVar1 = '\0';
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x40) = 1;
      if (pcVar2 != (char *)0x0) {
        do {
          if (((0xfff < uVar5) || (cVar1 == '\"')) || (bVar6)) break;
          cVar1 = *pcVar2;
          *(char *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38)) = cVar1;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          if ((cVar1 == '\r') || (cVar1 == '\n')) {
            bVar6 = true;
          }
          else {
            uVar4 = FUN_1002feb2(param_1);
            *(undefined4 *)(param_1 + 0x24) = uVar4;
            bVar6 = false;
          }
          pcVar2 = *(char **)(param_1 + 0x24);
          uVar5 = uVar5 + 1;
        } while (pcVar2 != (char *)0x0);
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      if (uVar5 == 0) {
        return '\0';
      }
      if (0xfff < uVar5) {
        return '\0';
      }
      if (cVar1 != '\"') {
        return '\0';
      }
      local_5 = *(bool *)(param_1 + 0x2c);
      if (local_5 == false) {
        if (pcVar2 == (char *)0x0) {
          return '\0';
        }
        cVar1 = *pcVar2;
        if (((cVar1 != ' ') && (cVar1 != '\t')) &&
           ((cVar1 != '\r' && ((cVar1 != '\n' && (cVar1 != ';')))))) {
          return '\0';
        }
        local_5 = true;
      }
      goto LAB_10030242;
    }
    if (cVar1 == ',') {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    else {
      if (cVar1 == ':') {
        local_5 = *(bool *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x40) = 6;
        if (local_5 != false) goto LAB_10030242;
        cVar1 = FUN_1003004d(param_1);
        if (cVar1 == '\0') {
LAB_100302ee:
          local_5 = *(bool *)(param_1 + 0x2c);
LAB_100302f1:
          if (local_5 == false) {
            return '\0';
          }
          goto LAB_10030242;
        }
        if (cVar1 == '[') {
          return '\0';
        }
        if (cVar1 == ']') {
          return '\0';
        }
        if (cVar1 == ':') {
          return '\0';
        }
        bVar6 = cVar1 == '=';
      }
      else if (cVar1 == ';') {
        *(undefined4 *)(param_1 + 0x40) = 3;
        while (pcVar2 != (char *)0x0) {
          if ((*pcVar2 == '\r') || (*pcVar2 == '\n')) goto LAB_10030240;
          pcVar2 = (char *)FUN_1002feb2(param_1);
          *(char **)(param_1 + 0x24) = pcVar2;
        }
        bVar6 = *(char *)(param_1 + 0x2c) == '\0';
      }
      else {
        if (cVar1 == '=') {
          *(undefined4 *)(param_1 + 0x40) = 5;
          goto LAB_10030240;
        }
        if (cVar1 == '[') {
          *(undefined4 *)(param_1 + 0x40) = 2;
          cVar1 = FUN_10030024(param_1);
          if (cVar1 == '\0') {
            return '\0';
          }
          if (*(char *)(param_1 + 0x2c) != '\0') {
            return '\0';
          }
          cVar1 = FUN_1003004d(param_1);
          if ((cVar1 == ' ') || (cVar1 == '\t')) {
            cVar1 = FUN_10030024(param_1);
            if ((cVar1 != '\0') && (local_5 = false, *(char *)(param_1 + 0x2c) == '\0')) {
              local_5 = **(char **)(param_1 + 0x24) == ']';
            }
          }
          else {
            local_5 = cVar1 == ']';
          }
          if (local_5 == false) {
            return '\0';
          }
          pcVar2 = (char *)FUN_1002feb2(param_1);
          *(char **)(param_1 + 0x24) = pcVar2;
          if (*(char *)(param_1 + 0x2c) != '\0') goto LAB_10030242;
          cVar1 = *pcVar2;
          if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) &&
             ((cVar1 != '\n' && (cVar1 != '[')))) {
            return '\0';
          }
          local_5 = true;
          goto LAB_100302f1;
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(char *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34)) = cVar1;
        local_5 = *(bool *)(param_1 + 0x2c);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        if (local_5 != false) goto LAB_10030242;
        cVar1 = FUN_1003004d(param_1);
        if (cVar1 == '\0') goto LAB_100302ee;
        if (cVar1 == '[') {
          return '\0';
        }
        bVar6 = cVar1 == ']';
      }
      if (bVar6) {
        return '\0';
      }
    }
  }
LAB_10030240:
  local_5 = true;
LAB_10030242:
  if (*(int *)(param_1 + 0x68) == 1) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        iVar3 = FUN_1005654d((int)*(char *)(uVar5 + *(int *)(param_1 + 0x34)));
        *(char *)(uVar5 + *(int *)(param_1 + 0x34)) = (char)iVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x38));
    }
  }
  else if ((*(int *)(param_1 + 0x68) == 2) && (uVar5 = 0, *(int *)(param_1 + 0x38) != 0)) {
    do {
      iVar3 = FUN_1005651e((int)*(char *)(uVar5 + *(int *)(param_1 + 0x34)));
      *(char *)(uVar5 + *(int *)(param_1 + 0x34)) = (char)iVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x38));
  }
  return local_5;
}

