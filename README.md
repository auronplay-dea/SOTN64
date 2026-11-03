# SOTN64 — prototipo homebrew

Prototipo original de acción lateral para Nintendo 64. No incluye código,
sprites, música ni recursos extraídos de Castlevania.

## Controles
- Cruceta o stick: moverse.
- A: saltar.
- B: atacar.

## Compilación
El proyecto usa Libdragon. El flujo de GitHub Actions incluido intenta
preparar el entorno con el CLI oficial y compilar la ROM en la nube.

Para usarlo:
1. Subí todos los archivos de esta carpeta a un repositorio de GitHub.
2. Abrí la pestaña Actions.
3. Elegí "Build SOTN64 ROM" y pulsá "Run workflow".
4. Si termina bien, descargá el artefacto "SOTN64-z64".

Si falla, compartí el registro del paso que dio error. La compilación en la nube
depende de los cambios y requisitos actuales del CLI de Libdragon; este flujo
es un intento automatizado, no una ROM ya probada.
